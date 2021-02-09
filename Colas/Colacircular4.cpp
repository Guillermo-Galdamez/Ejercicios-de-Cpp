#include <iostream>

using namespace std;

struct nodo
{
    int dato;
    struct nodo *next;
};
int max=7;
struct queue
{
  nodo *final;
  nodo *inicio;
  queue *vector[];
};

// Funciones ***********************************
void initialize(queue *q){
    q->inicio = NULL;
    q->final = NULL;
}
// *********************************************
bool empty(queue *q){
    return (q->final==NULL) ? true : false;
}
// *********************************************
void enqueue(queue *q, int x){
    nodo *n = new nodo;
    n->dato = x;
    n->next = NULL;
    if (q->vector[max] )
    {
        cout<<"Cola llena"<<endl;
    }
    else  
    {
        if (q->final==NULL)
        {
            q->vector[q->inicio] = n;
            
        }
        
    }
    
    
    
    
}
// *********************************************
int dequeue(queue *q){
    
}
// *********************************************

 void menu(){
  
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar elementos a la cola" << endl;
        cout << "2. Borrar elementos de la cola" << endl;
        cout << "3. Mostrar cola" << endl;
        cout << "4. Terminar el programa" << endl;

        cout << "\n" << "Ingrese la opción que desea ejecutar: ";
        cin >> option;

        switch(option) {
            case 1:
                int element;

                cout << "Ingrese el elemento a añadir a la cola" << endl;
                cin >> element;


                break;
            case 2: 
                
                break;
            case 3:
                
                break;
            case 4:
                cout << "Fin del programa" << endl;
                status = false;
                break;
            default: 
                cout << "Opción no válida" << endl;
                break;
        }
    }
}
 
 // *********************************************
int main (){
    menu();
}
