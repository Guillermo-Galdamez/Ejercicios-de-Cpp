#include <iostream>

using namespace std;

int main (void){

    int valor;
    cout<<"Digite un valor"<<endl;
    cin>>valor;
    int *puntero; //declaracion de puntero uso de asterisco
    puntero = &valor; //se apunta a la dirección de memoria de la variable valor
    cout<<"Valor original: "<< valor<<endl;
    *puntero*=2; // se multiplica el valor por dos
    cout<<"Nuevo valor: "<< valor<< endl;

}