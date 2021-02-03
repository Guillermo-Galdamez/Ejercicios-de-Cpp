#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Inicializar con cero casillas
    vector<int> vector01;
    // Inicializar con valores predeterminados
    vector<float> vector02 = {1.2, 4.5, 6.6, 8.9, 10};
    
    // Recorrer - acceder a los elementos
    cout << "Contenido vector02: ";
    for (int i = 0; i < vector02.size(); i++) {
        cout << vector02[i] << "  ";
    }
    
    // Insertar al inicio
    vector01.insert(vector01.begin(), 3);
    vector01.insert(vector01.begin(), 2);
    vector01.insert(vector01.begin(), 9);
    
    vector02.insert(vector02.begin(), 5.5);
    vector02.insert(vector02.begin(), 7.6);
    
    // Insertar al final
    vector01.insert(vector01.end(), 0);
    vector01.insert(vector01.end(), 1);
    
    vector02.insert(vector02.end(), 3.14);
    
    // Recorrer - acceder a los elementos
    cout << "\nContenido vector01: ";
    for (int i = 0; i < vector01.size(); i++)
        cout << vector01[i] << "  ";
    
    cout << "\nContenido vector02: ";
    for (int i = 0; i < vector02.size(); i++)
        cout << vector02[i] << "  ";

    return 0;
}