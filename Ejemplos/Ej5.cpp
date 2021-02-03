#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1, 5, 3, 0, 6, 7, 8, 4, 2, 9};
    
    sort(arr, arr+10);
    
    for (int i=0; i<10; i++){
        cout << arr[i] << endl;
    }

    return 0;
}