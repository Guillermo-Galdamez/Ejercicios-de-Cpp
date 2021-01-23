#include <iostream>
#include <list>


using namespace std;


int main(){

    list<int>l;
    int op; bool estado = true;
    while(estado){
         cout<<"****MENU****"<<endl;
         cout<<"1. ingresar un elemento"<<endl;
         cout<<"2. Borrar un elemento"<<endl;
         cout<<"3. Mostrando lista"<<endl;
         cout<<"4. Mostrando cantidad de elementos"<<endl;
         cout<<"5. Salir"<<endl;
         printf("Opci%cn",163);
         cin>>op;
         switch (op)
         {
         case 1:
              int numero;
              cout<<"Ingrese un elemento"<<endl;
              cin>>numero;
              l.push_front(numero);
              break;
         case 2:
              l.pop_back();
              cout<<"El elemento final de la lista ha sido eliminado\n";
              break;
          case 3:
              for(int k: l)
              cout<<" "<< k;
              
              break;
          case 4:
          cout<<"La cantidad de elementos dentro de la lista son: "<<l.size()<<" numeros"<<endl;
              break;
          case 5:
              estado = false;
              cout<<"Gracias por usar el programa, cerrando..."<<endl;
              break;
         default:
              break;
         }
    }

 
 return 0;

}