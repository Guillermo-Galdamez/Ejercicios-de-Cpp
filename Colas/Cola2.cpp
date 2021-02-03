#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>pila1;
    pila1.push(6);
    pila1.push(5);
    pila1.push(4);
    pila1.push(3);//3,4,5,6
    cout<<"El tope: "<<pila1.top();//3
    cout<<"Esta vacia? "<<pila1.empty();
    pila1.pop();
    cout<<"El tope: "<<pila1.top();//4
    while(!pila1.empty()){
        cout<<"Recorriendo lista: "<<pila1.top();
        pila1.pop();
    }
}