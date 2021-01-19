#include <iostream>
 #include<string>
using namespace std;

struct Persona{
    string nombre;
    string apellido;
    int *edad;
    float altura;
}; 
void ingresar(int n,Persona p[]){

     for(int i=0;i<n;i++){
         cout<<"Ingrese nombre de la persona:"<<endl;
         cin>>p[i].nombre;
         cout<<"Ingrese apellido de la persona"<<endl;
         cin>>p[i].apellido;
         cout<<"Ingrese edad de la persona"<<endl;
         cin>>p[i].edad;
         cout<<"Ingrese altura de la persona"<<endl;
         cin>>p[i].altura;
     }
     
}
void mostrar(int n, Persona p[]){
    for(int i=0;i<n;i++){
     cout<<p[i].nombre<<endl;
     cout<<p[i].apellido<<endl;
    }
}
int main(){
  int n;
  cout<<"Digite la cantidad de personas a ingresar"<<endl;
  cin>>n;cout<<endl;
  struct Persona persona[n];
  ingresar(n,persona);
  mostrar(n,persona);
}