#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    // Inicializar con valores predeterminados
    list<int> list1 = {1, 2, 3, 4, 5};
    // Insertar al inicio
    list1.insert(list1.begin(), 0);
    // Insertar al final
    list1.insert(list1.end(), 6);
    
    // Recorrer - acceder a los elementos
    cout << "Contenido de list1:";
    for(int i: list1)
        cout << "  " << i;
        
    // Invertir
    list1.reverse();
    cout << "\nInvirtiendo list1:";
    for(int i: list1)
        cout << "  " << i;
        
    // Ordenar
    list1.sort();
    cout << "\nOrdenando list1:";
    for(int i: list1)
        cout << "  " << i;
        
    // Buscar el numero 3
    if(find(list1.begin(), list1.end(), 3) != list1.end())
        cout << "\nEl numero 3 si esta";
    else
        cout << "\nEl numero 3 no esta";
    
    // Insertar DESPUES de:
    cout << "\nInsertando el 7 DESPUES del 4... ";
    list1.insert(next(find(list1.begin(), list1.end(), 4)), 7);
    
    for(int i: list1) cout << "  " << i;
    
    // Insertar ANTES de:
    cout << "\nInsertando el 8 ANTES del 4... ";
    list1.insert(find(list1.begin(), list1.end(), 4), 8);
    
    for(int i: list1) cout << "  " << i;
    
    // Eliminando un elemento
    cout << "\nEliminando el 3... ";
    list1.erase(find(list1.begin(), list1.end(), 3));
    
    for(int i: list1) cout << "  " << i;
    
    // Consultar tamanio y vaciar lista
    cout << "\nCantidad de elementos: " << list1.size() << endl;
    cout << "Vaciando lista..." << endl;
    list1.clear();
    cout << "Cantidad de elementos: " << list1.size() << endl;

    return 0;
}