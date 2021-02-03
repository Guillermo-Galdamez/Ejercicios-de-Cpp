#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Inicializar con cero casillas
    vector<int> v1;
    
    // Consultar tamanio y capacidad
    cout << "size: " << v1.size() << " cap: " << v1.capacity() << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << "Insertando... ";
        v1.insert(v1.end(), 2);
        cout << "size: " << v1.size() << " cap: " << v1.capacity() << endl;
    }
    
    // Encoger - liberar espacio sin utilizar
    cout << "\nEncogiendo... ";
    v1.shrink_to_fit();
    cout << "size: " << v1.size() << " cap: " << v1.capacity() << endl;

    return 0;
}