#include <iostream>

using namespace std;

struct Nodo{
    int elemento;
    struct Nodo* siguiente;
};

struct Cola{
    Nodo* frente;
    Nodo* final;
};

void initialize(Cola *q){
    q->frente = NULL;
    q->final = NULL;
}

bool empty(Cola *q){
    return (q->frente==NULL) ? true : false;
}

int front(Cola *q){
    if(empty(q)){
        cout << "Underflow!" << endl;
    }
    return (q->frente)->elemento;
}

int back(Cola *q){
    if(empty(q)){
        cout << "Underflow!" << endl;
    }
    return (q->final)->elemento;
}

void enqueue(Cola *q, int x){
    Nodo *unNodo = new Nodo;
    unNodo->elemento = x;
    unNodo->siguiente = NULL;
    
    if(q->final==NULL)
        q->frente = unNodo;
    else
        (q->final)->siguiente = unNodo;
        
    q->final = unNodo;
}

int dequeue(Cola *q){
    if(empty(q)){
        cout << "Underflow!" << endl;
        
    }
    Nodo *unNodo = q->frente;
    int x = unNodo->elemento;
    q->frente = unNodo->siguiente;
    if(q->frente==NULL)
        q->final = NULL;
    delete(unNodo);
    return x;
}


void menu(Cola *q) {
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

                enqueue(q,element);

                break;
            case 2: dequeue(q);
                
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

int main() {
    Cola cola;
    initialize(&cola);
    menu(&cola);
    return 0;

}