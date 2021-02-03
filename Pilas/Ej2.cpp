#include<iostream>
#include<queue>
using namespace std;


int main (){
    queue<int> cola1;
    int numero=6;
    cola1.push(numero);// insertar al final 6
    cola1.push(5);// 6,5
    cola1.push(4);
    cola1.push(3);
    cola1.push(2);//6,5,4,3,2
    cout<<"El inicio de la cola es: "<<cola1.front()<<endl;
    cout<<"El final de la cola es: "<<cola1.back()<<endl;
    cola1.pop();//5
    cout<<"El inicio de la cola es: "<<cola1.front()<<endl;
    cout<<"El inicio de la cola es: "<<cola1.back()<<endl;
    cout<<"La cantidad de elemnetos de la cola es: "<<cola1.size()<<"La cola esta vacia? "<<cola1.empty();
    while(!cola1.empty()){
        cout<<"Recorriendo lista: "<<cola1.front();
        cola1.pop();
    }
}