#include <iostream>
using namespace std;

int main(void){
   int n;
   cout<<endl<<"Programa que encuentra el mayor número en una lista"<<endl;
   cout<<"Digite el número de elementos de la lista"<<endl;
   cin>>n; 

   int lista[n]; //Se crea un arreglo de tamaño n
   cout<<"Digite los números"<<endl;
   for(int i=0;i<n;i++){ // Se agregan los valores al arreglo
     cin>>lista[i];
   }

   cout<<"Los números son:"<<endl; // se meuestran los valores
   for(int i=0;i<n;i++){
     cout<<lista[i];
   }
   
   int mayor=lista[0]; //se define una variable con posición 0 del arreglo
   
   cout<<"Calculando el numero mayor..."<<endl;
   for(int i=0;i<n;i++){ // Se va recorriendo el arreglo para encontrar el mayor número
     if(lista[i]>mayor){
       mayor=lista[i];
     }
   }
   cout<<"El numero mayor es: "<<mayor<<endl;
   return 0;

}