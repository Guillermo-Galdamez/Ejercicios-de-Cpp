#include <iostream>
using namespace std;

struct nodo{
    int elemento;
    struct nodo *next;
}; 
typedef struct nodo *stack;

void initialize(stack*s){
    *s= NULL;
}
bool empty(stack *s){
    return *s==NULL;
}
void push(stack *s, int e){
    struct nodo *nodo;
    nodo= (struct nodo*)malloc(sizeof(struct nodo));
    nodo->elemento=e;
    nodo->next=*s;
    *s = nodo;
}
void pop (stack *s){
    if (!empty(s)){
        struct nodo *aux=*s;
        *s=(*s)->next;
        delete(aux);
    }
    else{
        return;
    }
}
void showstack(stack *s){
   struct nodo *copy=*s;
   bool Empty = false;
   while(!Empty){
       if(!empty(&copy)){
           cout<< copy->elemento<<" ";
           copy=copy->next;
       }
       else {
           Empty=true;
       }
   }
}

void menu(stack *stack){
  int o; bool state=true;

while(state){
    cout<<"\nMENU\n";
    cout<<"1. Ingrese un elemento"<<endl;
    cout<<"2. Eliminar un elemento"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Elija una opción: "<<endl;
    cin>>o;cout<<"\n";
  switch(o){
    case 1: int Elemento;
    cout<<"Ingrese elemento: \n";
    cin>>Elemento;
    push(stack,Elemento);
    cout<<"Mostrando pila: \n"<<endl;
    showstack(stack);
    break;
    case 2:pop(stack);
    cout<<"Mostrando pila: \n"<<endl;
    showstack(stack);
    break;
    case 3:
    cout<<"Fin del programa saliendo...";
    state = false;
    break;
    default: 
    break;
    }
  }
} 

int main (){
    stack stack;
    initialize(&stack) ;
    menu(&stack);
    return 0;
}