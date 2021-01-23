#include <iostream> 
#include<string>

using namespace std;

struct Persona {
    int carnet;
    string nombre;
    string apellido;
    int edad;
    int telefono;
    string email;
}; 

struct Nodo{
    Persona dato;
    Nodo *next;
};

struct Lista{
     Nodo *inicio;
};


/* --------------- FUNCIONES --------------- */

void inicializar(Lista *lista) {
   lista->inicio = NULL;
}

bool empty(Lista *lista) {
    return (lista->inicio == NULL) ? true : false;
}

void insertarFinal(Lista *lista, Persona dato) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = dato;
    nuevo->next = NULL;
    if(lista->inicio == NULL){
        lista->inicio = nuevo;
    }else{
        Nodo *p = lista->inicio;
        Nodo *q = NULL;
        while(p){
            q= p;
            p= p->next;
        }
        q->next = nuevo;
    }

}


Persona pedirDatos(){
    Persona nuevaPersona;

    cout << "\n Ingrese Carnet: "<<endl;
    cin>> nuevaPersona.carnet;
    cout << "\n Ingrese Nombre:"<<endl;
    cin>> nuevaPersona.nombre;
    cout << "\n Ingrese Apellido:"<<endl;
    cin>> nuevaPersona.apellido;
    cout << "\n Ingrese Edad:"<<endl;
    cin>> nuevaPersona.edad;
    cout << "\n Ingrese telefono: "<<endl;
    cin>> nuevaPersona.telefono;
    cout << "\n Ingrese Correo electronico:"<<endl;
    cin>> nuevaPersona.email;

   return nuevaPersona;
}


void llenarLista(Lista *lista){
   Persona persona = pedirDatos();
   insertarFinal(lista, persona);
   cout <<"Se agrego a la persona con exito"<< endl;
}

bool comparar(Persona p, string nombre){
    return p.nombre == nombre;
}

void eliminarPersona(Lista *lista){
    string name;
    cout<< "Ingrese nombre de la persona a borrar: "<<endl;
    cin>>name;
    Nodo *p = lista->inicio, *q = NULL;

    while(p != NULL && !comparar(p->dato, name)){
        q = p;
        p = p->next;
        if(p == NULL){
         cout << "La persona a borrar no existe"<<endl;
         return;
        }
        else if(q == NULL){
            lista->inicio = p->next;

        }
        else{
          q->next = p->next;
        }
        delete(p);
        cout<<"La persona ha sido borrada exitosamente"<<endl;
    }
}

void actualizarPersona(Lista *lista){
   string nombre;
   Nodo * aux = lista ->inicio;

   while(aux){
       Persona actual = aux->dato;
       if(actual.nombre == nombre ){
        cout<<" Pidiendo datos de la persona "<<endl;
        Persona persona = pedirDatos();
        aux->dato = persona;
        cout<< "Persona actualizada exitosamente"<<endl;
        break;
       }
       aux = aux->next;
   }
}

void mostrarLista(Lista *lista){
    Nodo *aux = lista->inicio;
    if (empty(lista)){
        cout<<"\n La lista esta vacía\n";
    }
    else{
        cout<< "---Lista Actual---"<<endl;
        while (aux)
        {
            Persona actual = aux->dato;
            cout<<actual.carnet<< " - "<<actual.nombre<< " - "<<actual.apellido<< " - "<<endl;
            cout<<actual.edad<< " - "<<actual.telefono<< " - "<<actual.email<< " - "<<endl;
        }
    }
}

void Menu(Lista *lista) {
  int opcion = 0;
  do {
    cout << "----- MENU PRINCIPAL -----" << endl;
    cout << "1. Llenar lista" << endl;
    cout << "2. Eliminar una persona" << endl;
    cout << "3. Actualizar los datos de una persona" << endl;
    cout << "4. Mostrar todas las personas" << endl;
    cout << "5. Salir" << endl;
    cin >> opcion;
    cin.ignore();
    switch (opcion) {
    case 1:
      llenarLista(lista);
      break;
    case 2:
      eliminarPersona(lista);
      break;
    case 3:
      actualizarPersona(lista);
      break;
    case 4:
        mostrarLista(lista);
        break;
    case 5: break;
    default:
      cout << "Seleccione una opcion valida" << endl;
      break;
    }
  } while (opcion != 5);
}

int main() {
    Lista personas;
    inicializar(&personas);
    Menu(&personas);
    return 0;
}