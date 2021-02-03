#include<iostream>
#include<string>
using namespace std;
struct estudiante{
    string nombre;
    int carnet;
    string nivel_c;
    int horas_s;
};
void menu(){
    int o, u; bool continuar=true;
    struct estudiante e;
    
    while(continuar){
        cout<<"\n    *****MENU*****   \n";
        cout<< "1. Ingresar un nuevo estudiante ";
        cout<< "2. Buscar un estudiante por carnet ";
        cout<< "3. Mostrar a todos los estudiantes registrados ";
        cout<< "4. Mostrar asistencia";
        cout<< "5. Salir ";
        printf("Opci%cn: ",162);
        cin>>o;cout<<endl;
        switch(o){
        case 1:
            getline(cin,e.nombre);
            cin>>e.carnet;
            getline(cin,e.nivel_c);
            cin>>e.horas_s;
            
            
       
        break;
        
        case 2:
        
        break;
        case 3:
        
        break;
        case 4:
        
        break;
        case 5:
        continuar = false;
        break;
        default:
        printf("Elija otra opci%cn",162);
        break;
        }
    }
}

int main(){
    
    
}