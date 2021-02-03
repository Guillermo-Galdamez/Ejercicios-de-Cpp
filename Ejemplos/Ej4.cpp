#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1 = { 10, 9, 8, 6, 7, 2, 5, 1 };
    
    // Ordenar vector ascendentemente
    cout << "Ordenando... ";
    sort(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << "  ";
        
    // Utilizar busqueda binaria
    if(binary_search(v1.begin(), v1.end(), 6))
        cout << "\nEl numero 6 si se encuentra";
    else
        cout << "\nEl numero 6 no se encuentra";
        
    if(binary_search(v1.begin(), v1.end(), 3))
        cout << "\nEl numero 3 si se encuentra";
    else
        cout << "\nEl numero 3 no se encuentra";
    
    // Ordenar vector descendentemente
    cout << "\nOrdenando... ";
    sort(v1.begin(), v1.end(), greater<int>());
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << "  ";
    
    return 0;
}
