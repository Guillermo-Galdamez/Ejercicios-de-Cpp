#include<iostream>
#include<string>

using namespace std;

struct persona{
    string nombre;
    string apellido;
    int edad;
};
struct nodo{
    persona dato;
    nodo *next;
    nodo *prev;
};
class Listadoble{
    private:
       nodo *pInicio;
    public:
    Listadoble();
    ~Listadoble();
    void insin(persona dato);
    void insfi(persona dato);
    void insertar(void);
    void mostrar(void);
    bool eliminar(string);

};
Listadoble::Listadoble(void){
    pInicio = NULL;
}
Listadoble::~Listadoble(void){
    nodo *p;
    while(pInicio){
        p= pInicio;
        pInicio= pInicio->next;
        delete p;
    }
}
void Listadoble::insin(persona dato){
     nodo *nuevo;
     nuevo = new nodo;
     nuevo->dato=dato;
     nuevo->prev=NULL;
     nuevo->next= pInicio;
     if(nuevo->next) nuevo->next->prev = nuevo;
     pInicio = nuevo;
}
void Listadoble::insfi(persona dato){
    nodo *nuevo;
     nuevo = new nodo;
     nuevo->dato=dato;
     nuevo->next=NULL;
     if(!pInicio)
     pInicio = nuevo;
     else{
      nodo *s = pInicio;
      while(s->next){
         s =  s-> next;
         s-> next = nuevo;
      }
     }
}
void Listadoble :: insertar(void){
   persona p;
    cout << "\n Ingrese Nombre:"<<endl;
    cin>> p.nombre;
    cout << "\n Ingrese Apellido:"<<endl;
    cin>> p.apellido;
    cout << "\n Ingrese Edad:"<<endl;
    cin>> p.edad;
    
    insin(p);
    //insfi(p);
}

void Listadoble::mostrar(void){
   nodo *p;
   cout<<"Los elementos de la lista son: "<<endl;
   p = pInicio;
   while(p-> next){
            cout<<p->dato.nombre<< " - "<<p->dato.apellido<< " - "<<p->dato.edad<<endl;
       p = p->next;
   }
   while(p-> prev){
            cout<<p->dato.nombre<< " - "<<p->dato.apellido<< " - "<<p->dato.edad<<endl;
       p= p->prev;
   }
   cout<<"Fin de la Lista"<<endl;
}
bool Listadoble::eliminar(string datoc){
       
       if(!pInicio)
       return false;
       else{
           nodo *s = pInicio, *p;

           if(s->dato.nombre == datoc){
               pInicio = pInicio->next;
               delete s;
           }
           else{
             while(s->next && s->next->dato.nombre != datoc)
               s = s-> next;
              if(!s->next)
               return false;
              else{
                p = s->next;
                s->next = s->next->next;
                delete p;
                return true;
              }
           }
       }
}
int main (){
    Listadoble list; int opcion; bool cont;string name;
    while(cont){
        cout << "----- MENU PRINCIPAL -----" << endl;
    cout << "1. Llenar lista" << endl;
    cout << "3. Mostrar todas las personas" << endl;
    cout << "4. Salir" << endl;
    cin >> opcion;
    cin.ignore();
    switch (opcion)
    {
    case 1:
        list.insertar();
        break;
    case 2:
    cout<< "Ingrese nombre de la persona a borrar: "<<endl;
    cin>>name;
        list.eliminar(name);
        break;
    case 3:
        list.mostrar();
        break;
    case 4:
        cont = false; cout<<"Fin del programa"<<endl;
        break;
    default:
    cout << "Seleccione una opcion valida" << endl;
        break;
    }
    }
    
    return 0;
    
}