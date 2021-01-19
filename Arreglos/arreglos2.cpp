#include<iostream>
#include<string>
using namespace std;
int funcion(string a){
    int vocales=0,contador =0;int ch =  a.length();
    char  *p;
    p = &a[0];
    char *q;
    q= &a[ch];
    while(*p!=*q){
      *(p++);
      vocales=contador+vocales;
        if ((*p =='a')||(*p =='e')||(*p =='i')||(*p =='o')||(*p =='u')){
           vocales++;
        }
    }
    return vocales;
}
int main(void){
string a;
cout<<"Digite una cadena de caracteres: ";
cin>>a;cout<<endl;
cout<<"La cantidad de vocales es: " <<funcion(a);
return 0;

}