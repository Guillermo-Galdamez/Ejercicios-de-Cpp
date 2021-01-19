#include <iostream>
using namespace std;

void mostrar(int *p, int COLS){
	cout << "*(p+i*COLS+j): " << endl;
	cout << *(p+0*COLS+0) << endl;
	cout << *(p+0*COLS+1) << endl;
	cout << *(p+0*COLS+2) << endl;
	cout << *(p+1*COLS+0) << endl;
	cout << *(p+1*COLS+1) << endl;
	cout << *(p+1*COLS+2) << endl;
}

int main(){
    int m[2][3] = {{6,7,3},{4,9,1}};
    cout << "m: " << m << endl;
    cout << "*m: " << *m << endl;
    cout << "**m: " << **m << endl;
	
	cout << "*(*(m+i)+j)" << endl;
	cout << *(*(m+0)+0) << endl;
	cout << *(*(m+0)+1) << endl;
	cout << *(*(m+0)+2) << endl;
	cout << *(*(m+1)+0) << endl;
	cout << *(*(m+1)+1) << endl;
	cout << *(*(m+1)+2) << endl;

	cout << "*(*m+i*COLS+j)" << endl;
	int COLS = 3;
	cout << *(*m+0*COLS+0) << endl;
	cout << *(*m+0*COLS+1) << endl;
	cout << *(*m+0*COLS+2) << endl;
	cout << *(*m+1*COLS+0) << endl;
	cout << *(*m+1*COLS+1) << endl;
	cout << *(*m+1*COLS+2) << endl;
	
	cout << "Ejecutando funcion: " << endl;
	mostrar(*m, COLS);
}
