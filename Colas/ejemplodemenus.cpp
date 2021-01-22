#include<iostream>
using namespace std;

void menu2(){
  cout<<"Menu 2";
}
int main(){
   int opcion; bool estado=false;
   while(estado){
      cout<<"***Menu***";
      cout<<"1. Menu 2";
      cin>>opcion; 
      switch(opcion){
          case 1: menu2();
      }
   }
   
}


