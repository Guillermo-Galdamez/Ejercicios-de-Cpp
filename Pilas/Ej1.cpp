#include <iostream>
#include <string>
using namespace std;

// Definicion de nodo ------------------------
struct plato{
    string color;
    string material;
    string tipo;
};
typedef struct plato Plato;

struct nodo{
   Plato elementos;
   struct nodo *siguiente;
};
typedef struct nodo *Pila;

// Prototipos de funciones ------------------------
void initialize(Pila *s);
bool empty(Pila);
void push();
Plato pop();
Plato top();

// Programa principal ------------------------
int main(){
    // 1) Creando pila de platos vacia -------------
    Pila pilaDePlatos;
    initialize(&pilaDePlatos);
    
    // 2) Apilando platos --------------------------
    bool continuar = true;
    do{
        char opcion = 's';
        //cout << "\nCantidad de platos actual: " << pilaDePlatos.size();
        cout << "\nDesea apilar otro plato? (s/n): ";
        cin >> opcion; cin.ignore();
        
        if(opcion == 's'){
            Plato unPlato;
            cout << "Color: ";      
            cout << "Material: ";   
            cout << "Tipo: ";       
            push(&pilaDePlatos, unPlato);
        }
        else if(opcion == 'n')
            continuar = false;
        else
            cout << "Opcion no valida!" << endl;
    }while(continuar);
    
    // 3) Desapilando platos -----------------------
    cout << "\nDesapilando platos..." << endl;
    while(!empty(&pilaDePlatos)){
        // Obtener el plato de encima (sin sacarlo de la pila)
        
        // Sacando plato de la pila
        pop(&pilaDePlatos);
    }
    cout << "Pila de platos vacia." << endl;

    return 0;
}

// Implementacion de funciones ------------------------
void initialize(Pila *s){
    
}

bool empty(Pila *s){
    
}

void push(Pila *s, Plato e){
   
}

Plato pop(Pila *s){
    
}

Plato top(Pila *s){
                
}
