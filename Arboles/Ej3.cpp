/* Un programa en donde se introduzca el nombre de un chile, el nivelde picane en la escla de
SHU y su color, mostrando los choles in orden, en pre orden solo los de color rojo y
en post orden los que tengan más de 50000 en la escla de picante.
*/
#include <iostream>
#include <string>
using namespace std;

enum Color{verde, amarillo, naranja, rojo}; // un enum para los colores de los chiles
enum comparacion{menorque,mayorque,igualque}; // aprovechando para declarar los valores para mandarlos a la izquierda o derecha

struct Chile{ // El registro para los chiles.
     string name;
     int shu;
     Color color; // declaramos variable tipo enum

};typedef Chile c; // le apodamos c al registro Chile por comodidad

struct nodo{ // aprovechamos para declarar el registro "nodo"
    c datos; 
   struct nodo *left;
   struct nodo *right;

};typedef nodo *A; 
//--------------------------------------------------------------------------------------------------------------------
Chile ingresar(){ // Creamos la función para ingresar los datos de los chiles del mismo tipo para retornar los valores
  Chile unChile; int o;
    cout << "Nombre del chile: ";
    getline(cin, unChile.name);
    cout << "Scoville Heat Units/SHU (Nivel de picante del Chile): ";
    do{
     cin >> unChile.shu; cin.ignore();
    }while(unChile.shu<=0);
    cout<<"\nIngrese el color del chile:\n 1.vede\n 2.amarillo\n 3.naranja\n 4.rojo\n ";
     cin>>o; cout<<endl;
     switch (o)
     {
    case 1: unChile.color=verde;
         break;
    case 2:unChile.color=amarillo;
         break;
    case 3: unChile.color=naranja;
         break;
    case 4: unChile.color=rojo;
         break;
     default:
         break;
     }
    return unChile;
}
//-----------------------------------------------------------------------------------------------------------------------------
void mostrar(Chile unChile){ // Hacemos un función para devolver los valores
   cout<<"Nombre del Chile: "<<unChile.name<<endl;
   cout<<"Nivel de picante del Chile: "<<unChile.shu<<" SHU's"<<endl;
   cout<<"Color del Chile: ";
       switch(unChile.color){
               case verde: cout << "Verde" << " "; break;
               case amarillo: cout << "Amarillo" << " "; break;
               case naranja: cout << "Naranja" << " "; break;
               case rojo: cout << "Rojo" << " "; break;
           }
           cout<<endl;
}
//------------------------------------------------------------------------------------------------------------------------------
bool comparar(Chile a, comparacion operador, Chile b){// Vamos a clasificar los subarboles mediante el nivel de picante de tipo int
  bool resultado = false;
    switch(operador){
        case menorque: resultado = a.shu < b.shu; break;
        case mayorque: resultado = a.shu > b.shu; break;
        case igualque: resultado = a.shu == b.shu; break;
    }
    return resultado;
}
//------------------------------------------------------------------------------------------------------------------------------

A creararbl(c d){ // Se inicilaiza el arbol
  A a = new nodo;
  a->datos=d;
  a->left=NULL;
  a->right=NULL;
  return a;

}
//------------------------------------------------------------------------------------------------------------------------------
void asignarIzq(A a, c unDato){ // Para asignar los datos al sub arbol izquierdo, datos menores
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->left != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->left = creararbl(unDato);
}
//------------------------------------------------------------------------------------------------------------------------------
void asignarDer(A a, c unDato){ // Para asignar los datos al sub arbol derecho, datos mayores
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->right != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->right = creararbl(unDato);
}
//------------------------------------------------------------------------------------------------------------------------------
void agregarNodo(A a){ // Para agregar los nodos y dar la respectiva  asignación 

    cout << "Agregar primer chile:\n";
    c unDato = ingresar();
    
    A p = a;
    
    while(true){
        if(comparar(unDato, igualque, p->datos)){
            cout << "Error: dato ya existe!" << endl;
            return;
        }
        else if(comparar(unDato, menorque, p->datos)){
            if(p->left == NULL)
                break;
            else
                p = p->left;
        }
        else{
            if(p->right == NULL)
                break;
            else
                p = p->right;
        }
    }
    
    if(comparar(unDato, menorque, p->datos))
        asignarIzq(p, unDato);
    else
        asignarDer(p, unDato);
}
//------------------------------------------------------------------------------------------------------------------------------
void preorden(A a){ // Mostrar los datos en preorden
    if(a != NULL && a->datos.color==rojo){ // Si no está vacío y si son de color rojo
        cout << "\n"; mostrar(a->datos);
        preorden(a->left);
        preorden(a->right);
    }
    if(a != NULL && a->datos.color!=rojo){ // Si no está vacío y si no son de color rojo
        cout<<"No hay pimientos(chiles) rojos"<<endl;
    }
    
}
//------------------------------------------------------------------------------------------------------------------------------
void inorden(A a){ // Mostrar los datos en inorden
    if(a != NULL){
        inorden(a->left);
        cout << "\n"; mostrar(a->datos);
        inorden(a->right);
    }
}
//------------------------------------------------------------------------------------------------------------------------------
void postorden(A a){ // Mostrar los datos en postorden
    if(a != NULL && a->datos.shu>50000){ // Si no está vacío y si el valor de picante es mayor a 50000
        postorden(a->left);
        postorden(a->right);
        cout << "\n"; mostrar(a->datos);
    }
    if(a != NULL && a->datos.color<=50000){ // Si no está vacío y si el valor de picante no es mayor a 50000
        cout<<"No hay pimientos(chiles) de mas de 50000"<<endl;
    }
}
//------------------------------------------------------------------------------------------------------------------------------
void recorrerArbol(A a){ // Funión para que elijan el tipo de recorrido
    bool continuar=true;
    while (continuar)
    {
        int opcion;
        cout << "\nMenu: \n";
        cout << "1) Recorrido PRE orden (solo los de color rojo)\n";
        cout << "2) Recorrido IN orden:\n";
        cout << "3) Recorrido POST orden(solo los de mas de 50000 SHU's)\n";
        cout << "4) Volver\n";
        cout << "Opcion elegida: \n";
        cin >> opcion; cin.ignore();
        switch(opcion){
            case 1:cout << "\nRecorrido PRE orden (solo los de color rojo): "; preorden(a); cout << endl;
            break;
            case 2:cout << "\nRecorrido IN orden: "; inorden(a); cout << endl;
            break;
            case 3:cout << "\nRecorrido POST orden(solo los de mas de 50000 SHU's): "; postorden(a); cout << endl;
            break;
            case 4:cout<<"Volviendo...";
            continuar=false;
            break;
            default: cout << "Opcion no disponible" << endl; break;
            break;

        }
    }
    
}
//------------------------------------------------------------------------------------------------------------------------------
void menu(){ // El menu
    cout<<"Inicializando arbol...\nValor contenido en la raiz:\n"; // inicializar con la raíz
    A a = creararbl(ingresar());
    
    bool continuar = true, continuar2=true;
    while(continuar){
        int opcion;
        cout << "\nMenu: \n";
        cout << "1) Agregar Chile nuevo\n";
        cout << "2) Recorrer\n";
        cout << "3) Salir\n";
        cout << "Opcion elegida: \n";
        cin >> opcion; cin.ignore();
        switch(opcion){
            case 1: agregarNodo(a);
            break;
            case 2: recorrerArbol(a); break;
            break;
            case 3:
            cout<<"Cerrando programa... Tenga buen dia"<<endl;
             continuar = false; 
            break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    };
}
//------------------------------------------------------------------------------------------------------------------------------
int main(void){
    menu();
    return 0;
}