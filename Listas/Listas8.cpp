#include <iostream>
#include <string>
#include <list>
using namespace std;
enum generos{rock,pop,bluse,jazz};

struct canciones1{
    string titulo;
    string artista;
    generos genero;
};
struct canciones2{
    string titulo;
    string artista;
    generos genero;
};

void menu1(list<canciones1>&list1){
    int op,o; 
    bool estado =true, continuar = true;
    struct canciones1 c; 
    while(estado){
         cout<<"****MENU****"<<endl;
         cout<<"1. ingresar datos"<<endl;
         cout<<"2. Mostrar"<<endl;
         cout<<"3. Eleminar primer elemento"<<endl;
         cout<<"4. Vaciar lista"<<endl;
         cout<<"5. Salir"<<endl;
         printf("Opci%cn: ",162);
         cin>>op;cin.ignore();//Este fue lo que falló XD
         switch (op)
         {
         case 1:
              cout<<"Ingrese titulo de la cancion"<<endl;
              getline(cin,c.titulo);cout<<endl;
              cout<<"Ingrese el artista de la cancion"<<endl;
              getline(cin,c.artista);cout<<endl;
              while(continuar){
                   cout<<"1. rock\n2. pop\n3. Blues\n4. Jazz\n";
                   cin>>o;
                        switch (o)
                          {
                              case 1: c.genero = rock; continuar=  false; break;
                              case 2: c.genero = pop; continuar =false;break;
                              case 3: c.genero =  bluse; continuar = false;break;
                              case 4: c.genero = jazz; continuar = false;break;
                              default: cout<< "Elija una opcion\n";break;
                    }      
                 }list1.insert(list1.end(),c);// Esto es para que se inserte en la lista
              break;
              
         case 2:
              for(canciones1 j: list1 ){
               cout<<"Titulo: "<< j.titulo<<endl;
               cout<<"Artista: "<<j.artista<<endl;
               cout<<"Genero: ";
                 switch(c.genero){
                     case rock: cout<<"Rock"<<endl; break;
                     case pop: cout<<"Pop"<<endl; break;
                     case bluse: cout<<"Bluse"<<endl; break;
                     case jazz: cout<<"Jazz"<<endl; break;
                 }
              }
              break;
          case 3:list1.pop_front();
              cout<<"Eliminando con exito..."<<endl;
              break;
          case 4:list1.clear();
              cout<<"Vaciando lista..."<<endl;
              break;
          case 5:
              estado = false;
              cout<<"Gracias por usar el programa, regresando..."<<endl;
              break;
         default:
              break;
         }
    }
}
void menu2(list<canciones2>&list2){
    int op, o; bool estado =true, continuar = true;
    struct canciones2 c; 
    while(estado){
         cout<<"****MENU****"<<endl;
         cout<<"1. ingresar datos"<<endl;
         cout<<"2. Mostrar"<<endl;
         cout<<"3. Eleminar primer elemento"<<endl;
         cout<<"4. Vaciar lista"<<endl;
         cout<<"5. Salir"<<endl;
         printf("Opci%cn: ",162);
         cin>>op;
         switch (op)
         {
         case 1:
              cout<<"Ingrese titulo de la cancion"<<endl;
              getline(cin,c.titulo);cout<<endl;
              cout<<"Ingrese el artista de la cancion"<<endl;
              getline(cin,c.artista);cout<<endl;
              while(continuar){
                   cout<<"1. rock\n2. pop\n3. Blues\n4. Jazz\n";
                   cin>>o;
                        switch (o)
                          {
                              case 1: c.genero = rock; continuar=  false; break;
                              case 2: c.genero = pop; continuar =false;break;
                              case 3: c.genero =  bluse; continuar = false;break;
                              case 4: c.genero = jazz; continuar = false;break;
                              default: cout<< "Elija una opcion\n";break;
                    }      
                 }list2.insert(list2.end(),c);
              break;
              
         case 2:
              for(canciones2 j: list2 ){
               cout<<"Titulo: "<< j.titulo<<endl;
               cout<<"Artista: "<<j.artista<<endl;
               cout<<"Genero: ";
                 switch(c.genero){
                     case rock: cout<<"Rock"<<endl; break;
                     case pop: cout<<"Pop"<<endl; break;
                     case bluse: cout<<"Bluse"<<endl; break;
                     case jazz: cout<<"Jazz"<<endl; break;
                 }
              }
              break;
          case 3:list2.pop_front();
              cout<<"Eliminando con exito..."<<endl;
              break;
          case 4:list2.clear();
              cout<<"Vaciando lista..."<<endl;
              break;
          case 5:
              estado = false;
              cout<<"Gracias por usar el programa, regresando..."<<endl;
              break;
         default:
              break;
         }
    }
}

int main(){
   list<canciones1> list1;
   list<canciones2> list2;
   int op; bool estado = true;
    while(estado){
         cout<<"****MENU****"<<endl;
         cout<<"1. Lista 1 de musica"<<endl;
         cout<<"2. Lista 2 de musica"<<endl;
         cout<<"3. Salir"<<endl;
         printf("Opci%cn\n",162);
         cin>>op;
         switch (op)
         {
         case 1:
            menu1(list1);
              break;
         case 2:
            menu2(list2);
              break;
          case 3:
              estado = false;
              cout<<"Gracias por usar el programa, cerrando..."<<endl;
              break;
         default:
              break;
         }
    }
    return 0;
}