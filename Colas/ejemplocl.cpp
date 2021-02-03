#include<iostream>
#include<string>
#include<stack>
#include<queue>

using namespace std;

struct estudiante{
    string nombre;
    int carnet;
    string nivel_c;
    int horas_s;
    bool asistencia;
};

void showstack(stack<estudiante> p){
     stack <estudiante> aux = p;
     while(!aux.empty()){
         aux.top();
         aux.pop();
     }
}
void showQueue(queue<estudiante> q) {
    queue<estudiante> clone = q;
    while (!clone.empty()) {
        cout<<clone.front()<<endl;
        clone.pop();
    }
}
void menu(stack<estudiante>p){
    int o, u; bool continuar=true;
    struct estudiante e;
    queue<estudiante> q;
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
            cout<<""<<endl;
            getline(cin,e.nombre);
            cout<<""<<endl;
            cin>>e.carnet;
            cout<<""<<endl;
            getline(cin,e.nivel_c);
            cout<<""<<endl;
            cin>>e.horas_s;
            cout<<""<<endl;
            cin>>u;
            switch (u)
            {
                case 1: e.asistencia = true; break;
                case 2: e.asistencia = false; break;
                default: break;
            }
        p.push(e);
        if (e.asistencia == true){
            q.push(e);
        }
        break;
        
        case 2:
        
        break;
        case 3:
        showstack(p);
        break;
        case 4:
        showQueue(q);
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
    stack<estudiante> p;
    menu(p);
    
}