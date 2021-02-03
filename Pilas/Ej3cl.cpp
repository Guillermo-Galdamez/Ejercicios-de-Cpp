#include <iostream>
#include <stack>
using namespace std;

void showstack(stack<int> elemento){
     stack <int> aux = elemento;
     while(!aux.empty()){
         aux.top();
         aux.pop();
     }
}

void menu(stack <int> elemento){
  int option; bool state=true;

 while(state){
    cout<<"\nMENU\n";
    cout<<"1. Ingrese un elemento"<<endl;
    cout<<"2. Eliminar un elemento"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Elija una opción: "<<endl;
    cin>>option;cout<<"\n";
  switch(option){
    case 1: int e;
    cout<<"Ingrese un elemento\n";
    cin>>e;
    elemento.push(e);
    cout<<"Mostrando pila"<<endl;
    showstack(elemento);
    break;
    case 2:elemento.pop();
    cout<<"Mostrando pila"<<endl;
    showstack(elemento);
    break;
    case 3:
    cout<<"Fin del programa";
    state=false;
    break;
    default: 
    break;
    }
  }
} 
int main (){
    stack<int> e ;
    menu(e);
    return 0;
}