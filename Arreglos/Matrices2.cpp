#include<iostream>
using namespace std;
void numeros(int *p){
    int suma1=0, suma2=0;
   for(int i=0;i<9;i++){
       
     if(*p % 2 == 0 ){
     suma1++;
    }
    else{
     suma2++;
    }
    *(p++);
}
   cout<< "La cantidad de numero pares es "<<suma1<<endl;
   cout<< "La cantidad de numero impares es "<<suma2<<endl;

}
int main (void){
 int digito[3][3];
 int cols=3;
 cout << "Digite los numeros " << endl;
 for (int i = 0; i <3 ; i++) {
        for (int j = 0; j <cols ; j++) {
            cout << "numero de fila " << i << " columna " << j << " : ";
            cin >> *(*digito+ (i*cols) +j);
        }
    }
 numeros (*digito);
return 0;
}