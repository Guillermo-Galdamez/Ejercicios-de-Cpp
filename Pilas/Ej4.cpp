#include <iostream>
using namespace std;

// Definicion del nodo ----------------------------
struct nodo{
    float elemento;
    struct nodo *siguiente;
};
typedef struct nodo *Pila;

// Implementacion de funciones ----------------------------
void initialize(Pila *s){
    *s = NULL;
}

bool empty(Pila *s){
    return *s == NULL;
}

void push(Pila *s, float e){
    struct nodo *unNodo;
    unNodo = (struct nodo *)malloc(sizeof(struct nodo));
    unNodo->elemento = e;
    unNodo->siguiente = *s;
    
    *s = unNodo;
    //cout << "Curiosidad: " << &unNodo << "\t";
    cout << "Nueva direccion: " << *s << endl;
}

float pop(Pila *s){
    if(!empty(s)){
        struct nodo *unNodo = *s;
        float e = (*s)->elemento;
        *s = (*s)->siguiente;
        delete(unNodo);
        cout << "Nueva direccion: " << *s << endl;
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}

int top(Pila *s){
    if(!empty(s)){
        int e = (*s)->elemento;
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}

// Programa principal ----------------------------
int main(){
    Pila unaPila;
    initialize(&unaPila);
    cout << "Direccion de unaPila: " << &unaPila << endl;
    cout << "Contenido de unaPila: " << unaPila << endl;
    
    cout << endl << "PUSH" << endl;
    push(&unaPila, 1);
    push(&unaPila, 2);
    push(&unaPila, 3);
    
    cout << endl << "TOP" << endl;
    cout << "top: " << top(&unaPila) << endl;
    
    cout << endl << "POP" << endl;
    cout << "pop: " << pop(&unaPila) << endl;
    cout << "pop: " << pop(&unaPila) << endl;
    cout << "pop: " << pop(&unaPila) << endl;
    cout << "pop: " << pop(&unaPila) << endl;

    return 0;
}