#include <iostream>
#include <string>

using namespace std;

struct Canciones
{
    
};

struct Nodo{
    
};

struct Cola{
    Nodo* front;
    Nodo* back;
};

void initialize(Cola *q){
    q->back = NULL;
    q->front = NULL;
}

bool empty(Cola *q){
    return (q->front == NULL) ? true : false;
}

void push(Cola *q, Canciones c){

    Nodo *unNodo = new Nodo;
    unNodo->elemento = c;
    unNodo->siguiente = NULL;

    if(q->back == NULL){
        q->front = unNodo;
    }
    else{
        (q->back)->siguiente = unNodo;
    }
    q->back = unNodo;
}

void pop(Cola *q){
    if(empty(q)){
        cout<<"Cola vacia!\n";
        return;
    }

    Nodo *unNodo = q->front;
    q->front = unNodo->siguiente;

    if(q->front == NULL){
        q->back = NULL;
    }
    delete (unNodo);
}

void agregarCancion(Cola *q){
    Canciones cancion;
    
}

void vaciarPlaylist(Cola *q){
   
}

void mostrarPlaylist(Cola *q) 
{
    
} 

void menu(Cola *q, int opcion)
{
    
}

void mostrarMenuCanciones(Cola *q)
{
    int opcion = 0;
    do
    {
        cout << "----- MENU -----" << endl;
        cout << "1. Agregar nueva cancion" << endl;
        cout << "2. Eliminar cancion" << endl;
        cout << "3. Vacia playlist" << endl;
        cout << "4. Mostrar playlist" << endl;
        cout << "5. Regresar" << endl;
        cin >> opcion;
        cin.ignore();
        menu(q, opcion);

    } while (opcion != 5);
}

void mostrarMenu(Cola *f, Cola *t, Cola *e)
{
    int opcion = 0;
    do
    {
        cout << "----- PLAYLIST -----" << endl;
        cout << "1. Feliz" << endl;
        cout << "2. Triste" << endl;
        cout << "3. Estudiar" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;
        cin.ignore();
        switch (opcion)
        {
        case 1:
            mostrarMenuCanciones(f);
            break;
        case 2:
            mostrarMenuCanciones(t);
            break;
        case 3:
            mostrarMenuCanciones(e);
            break;
        case 4:
            break;
        default:
            cout << "Seleccione una opcion valida" << endl;
            break;
        }

    } while (opcion != 4);
}

int main() {
  Cola feliz, triste, estudio; 

  

  mostrarMenu(&feliz, &triste, &estudio);

  return 0;
}