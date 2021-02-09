#include<iostream>
using namespace std;

struct nodo{  
    int dato;
    struct nodo *next;
};

typedef struct nodo *pila;

void inicializar(pila *s){
    *s = NULL;
}
bool empty(pila *s){
   return *s == NULL;
}
void push(pila *s, int d){
    struct nodo *unNodo;
    unNodo = (struct nodo *)malloc(sizeof(struct nodo));
    unNodo->dato = d;
    unNodo->next = *s;
    
    *s = unNodo;
    
    cout << "Nueva direccion: " << *s << endl;
}
float pop(pila *s){
    if(!empty(s)){
        struct nodo *unNodo = *s;
        float e = (*s)->dato;
        *s = (*s)->next;
        delete(unNodo);
        cout << "Nueva direccion: " << *s << endl;
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}
int top(pila *s){
    if(!empty(s)){
        int e = (*s)->dato;
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}
int size(pila *s){
    struct nodo *nodo = *s;
    int contador = 0;
    bool isEmpty = false;
    while (!isEmpty)
    {
        if (!empty(&nodo))
        {
            contador++;
            nodo = nodo->next;
            
        }else {
            isEmpty = true;
        }
    }
    return contador;
}
int buscar(pila *s, int e){
    struct nodo *clone= *s;
    bool Empty = false;
     while(!empty(&clone)){
          if(clone->dato==e){
              cout<<"El elemento se ha encontrado y es: ";
              return e;cout <<endl;
          }
          else{
              cout<<"El valor no se ha encontrado";
              return -1;
          }
          clone = clone->next;
        }
    
}
void showstack(pila *s){
   struct nodo *copy=*s;
   bool Empty = false;
   while(!Empty){
       if(!empty(&copy)){
           cout<< copy->dato<<" ";
           copy=copy->next;
       }
       else {
           Empty=true;
       }
   }
}
void menu(pila *s){
     int option; bool cont =true;
    while(cont){
     cout<<"\nMENU\n";
     cout<<"1. Ingrese un elemento"<<endl;
     cout<<"2. Eliminar un elemento"<<endl;
     cout<<"3. Mostrar tope de la pila "<<endl;
     cout<<"4. Buscar un elemento "<<endl;
     cout<<"5. Ver cuantos eleemntos hay "<<endl;
     cout<<"6. Salir "<<endl;
       cout<<"Elija una opción: "<<endl;
       cin>>option;cout<<"\n";
         switch(option){
           case 1: int Elemento;
           cout<<"Ingrese elemento: \n";
            cin>>Elemento;
             push(s,Elemento);
            cout<<"Mostrando pila: \n"<<endl;
             showstack(s);
           break;
           case 2:pop(s);
            cout<<"Mostrando pila: \n"<<endl;
            showstack(s);
           break;
           case 3:
           cout<<"Mostrando tope : ";
           top(s);cout<<endl;
           break;
           case 4:
           int numero;
           cout<<"Ingrese eleemneto a buscar: ";
           cin>>numero;
           buscar(s,numero);
           break;
           case 5:
           cout<<"El numero de elemento es de: ";
           size(s);cout<<endl;
           break;
           case 6:
           cout<<"Fin del programa saliendo...";
           cont = false;
           break;
          default: printf("Elija una opci%cn", 162);
          break;
    }
  }
}


int main(){
     pila s;
     inicializar(&s);
     menu(&s);
     return 0;

}