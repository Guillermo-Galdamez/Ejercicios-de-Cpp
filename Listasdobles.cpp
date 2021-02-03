#include<iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *next;
    nodo *prev;
};

class Listadoble{
    private:
       nodo *pInicio;
    public:
    Listadoble();
    ~Listadoble();
    void insertar(void);
    void insin(int);
    void insfi(int dato);
    void mostrar(void);
    void mostrarlistarecursiva(void);
    void mostrarrecursiva(nodo *p);
    void buscarlistarecursiva(void);
    int buscarrecursiva(nodo *p,int);
    void insdespues(int,int);
    bool eliminar(int);

};
Listadoble::Listadoble(void){
    pInicio = NULL;
}
Listadoble::~Listadoble(void){
    nodo *p;
    while(pInicio){
        p= pInicio;
        pInicio= pInicio->next;
        delete p;
    }
}
void Listadoble :: insertar(void){
 int dato, datob;

 cout << "Digite un numero: "<<endl;
 while(cin>>dato){
     insin(dato);
     //insfi(dato);
 }
}
void Listadoble::insin(int dato){
     nodo *nuevo;
     nuevo = new nodo;
     nuevo->dato=dato;
     nuevo->prev=NULL;
     nuevo->next= pInicio;
     if(nuevo->next) nuevo->next->prev = nuevo;
     pInicio = nuevo;
}
void Listadoble::insfi(int dato){
    nodo *nuevo;
     nuevo = new nodo;
     nuevo->dato=dato;
     nuevo->next=NULL;
     if(!pInicio)
     pInicio = nuevo;
     else{
      nodo *s = pInicio;
      while(s->next){
         s =  s-> next;
         s-> next = nuevo;
      }
     }
}
void Listadoble::mostrar(void){
   nodo *p;
   cout<<"Los elementos de la lista son: "<<endl;
   p = pInicio;
   while(p-> next){
       cout<< p->dato<<endl;
       p = p->next;
   }
   while(p-> prev){
       cout << p-> dato << endl;
       p= p->prev;
   }
   cout<<"Fin de la Lista"<<endl;
}

void Listadoble::mostrarlistarecursiva(void){
     cout<<"Los elementos de la lista son:"<<endl;
     Listadoble::mostrarrecursiva(pInicio);
}

void Listadoble :: mostrarrecursiva(nodo *p){
    if(p != NULL){
        cout<< p->dato <<endl;
        mostrarrecursiva(p->next);
    }
}
void Listadoble::buscarlistarecursiva(void){
    int numero;
     cout<<"Escriba el elemento a buscar: "<<endl;
     cin>>numero;cout<<endl;
     Listadoble::buscarrecursiva(pInicio, numero);
}
int Listadoble :: buscarrecursiva(nodo*p,int dato2){
     
     if( p->dato == dato2){
       return dato2;
     }
     else{
         buscarrecursiva(pInicio->next,dato2);
     }
}

void Listadoble::insdespues(int dato,int datob){
    nodo *nuevo = new nodo;
    nuevo->dato = dato;

    if(!pInicio){
      pInicio = nuevo;
      pInicio->next = NULL;
      pInicio->prev = NULL;
    }
    else {
        nodo *s;
        while(s->next && s->dato != datob)
            s=s->next;
        
        if(nuevo->next)
        nuevo->next->prev = nuevo;
        nuevo->prev = s;
        s->next = nuevo;
    }

}
bool Listadoble::eliminar(int datoc){
       if(!pInicio)
       return false;
       else{
           nodo *s = pInicio, *p;

           if(s->dato == datoc){
               pInicio = pInicio->next;
               delete s;
           }
           else{
             while(s->next && s->next->dato != datoc)
               s = s-> next;
              if(!s->next)
               return false;
              else{
                p = s->next;
                s->next = s->next->next;
                delete p;
                return true;
              }
           }
       }
}
int main (){
    Listadoble litsd;
    
    cout<<"*****Listas Dobles*****"<<endl;
    cout<< "Insercion de datos de la lista: "<<endl;
    litsd.insertar();
    litsd.mostrar();
    return 0;
    
}