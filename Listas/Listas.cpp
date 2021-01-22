#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

struct Persona{
    string nombre;
    int edad;
};

bool compEdad(Persona a, Persona b){
    return a.edad < b.edad;
}

int main(){
    list<Persona> estudiantes;
    
    char letra = 's';
    while(letra == 's'){
        Persona unaPersona;
        cout << "Nombre: "; getline(cin, unaPersona.nombre);
        cout << "Edad: "; cin >> unaPersona.edad; cin.ignore();
        estudiantes.insert(estudiantes.end(), unaPersona);
        
        cout << "\nDesea agregar alguien mas? (s/n): ";
        cin >> letra; cin.ignore();
    }
    
    // Ordenando estudiantes por edad
    cout << "\nOrdenando...\n";
    estudiantes.sort(compEdad);
    
    // Mostrando estudiantes ya ordenados
    for (Persona i : estudiantes) {
        cout << i.nombre << " tiene ";
        cout << i.edad << " anios.\n";
    }
    
    // Borrando un elemento
    cout << "\nBorrando a armando...\n";
    for(auto iter = estudiantes.begin(); iter != estudiantes.end(); ++iter)
        if(iter->nombre == "armando"){
            iter = estudiantes.erase(iter);
            break;
        }
    
    // Mostrando la lista con el elemento ya eliminado
    for (Persona i : estudiantes) {
        cout << i.nombre << " tiene ";
        cout << i.edad << " anios.\n";
    }

    return 0;
}