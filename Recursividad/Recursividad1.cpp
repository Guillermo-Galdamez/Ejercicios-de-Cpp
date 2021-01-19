#include <iostream>
using namespace std;

int factorial(int num){
  int respuesta = 0;
  if(num==0){
    cout << "n=" << num << " caso base" << endl;
    respuesta = 1;
  }else{
    int x = num - 1;
    respuesta = num * factorial(x);
    cout << "n=" << num << " x=" << x << endl;
  }
  return respuesta;
}

int main() {
    int n;
    cout<<"Digite un número "<<endl; cin>>n;cout<<endl;
    int result = factorial(n);//result, es la función recursiva
    cout << "Resultado: " << result << endl;
    return 0;
}