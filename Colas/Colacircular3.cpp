#include<iostream>
#include<malloc.h>

using namespace std;

struct nodo{  // Creamos el nodo 
    int dato;
    struct nodo *next;
} ; 

 struct nodo *inicio; // delcaramos el primer elemento
 // Funciones ________________________________________________

void insertar (int numero){ 
    struct nodo *temp, *aux; // Insertar nuevos nodos, avanzar a traves de la cola en caso de más nodos 

    temp = (struct nodo *) malloc (sizeof(struct nodo)); // Reservar memoria para la cola

    if (temp != NULL) // Que la memoria no este nula para ingresar elementos
    {
        temp -> dato = numero;
        temp -> next = NULL;

        if( inicio == NULL){ //  En caso de que la cola este vacía
            inicio = temp; 
        }
         else{ // En caso de que hayan elememtos existentes
             aux = inicio;
             while(aux-> next !=NULL){ // Se recorre hasta el último elemento
                 aux = aux->next;
                 aux->next = temp;
             }
         }
    }
    else // En caso de que la memoria esté nula
    {
        cout<<"Memoria insufuciente"<<endl;
    }

}

int eliminar(){
    struct nodo *temp;
    int dato;

    temp = inicio; // Para poder borrar el primer elemento
    inicio = temp -> next;
    dato = temp ->dato;
    free(temp); // Liberar memoria

}
void mostrar(){
    struct nodo *temp;

    temp = inicio;
    if (temp != NULL){
       while (temp != NULL)
       {
           cout<< "\nDato: "<< temp->dato;
           temp = temp->next;
       }
    }
    else{
        cout<<"cola vacía"<<endl;
    }
}



int main(void){
      
      int opcion;
      int dato, dato2;
      bool continuar=true;
      while(continuar){
          cout << " ********** MENU ********** "<< endl;
          cout << "1. Insertar un elemento\n2. Eliminar un elemento\n3. Mostrar cola\n4. Buscar elemento" << endl;
          printf("Ingrese una opci%cn",162);

          switch (opcion)
          {
          case 1:
              cout<<"Ingresa un elemento: "<<endl;
              cin>>dato;
              insertar(dato);
            
              break;
          case 2:
              if(inicio!=NULL){
                dato2=eliminar();
                cout<<dato2;
    
              }
              else{
                cout<<"La cola está vacía";
              }
              break;
          case 3:
              mostrar();
              break;
          case 4:
              
              break;
          case 5:
              cout<<"Fin del programa, pase buen dia :) ";
              continuar = false;
              break;
          default: 
          printf("Elija una opci%cn",162);
              break;
          }
      }
}