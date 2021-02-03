#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {0, 1, 2, 3, 4, 5};
    
    //Eliminar elementos del inicio
    v1.erase(v1.begin());
    v1.erase(v1.begin());
    
    //Eliminar elementos del final
    v1.erase(v1.end()-1);
    v1.erase(v1.end()-1);
    
    cout << "Contenido del vector: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << "  ";
        
    // Vaciar el vector
    v1.clear();
    
    cout << "\nContenido del vector: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << "  ";
        

    return 0;
}