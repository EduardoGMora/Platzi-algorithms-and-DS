#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int* ptr = &x;

    cout << "El valor de X es " << x <<endl;
    cout << "La dirección de X es " << &x <<endl;
    cout << "Valor almacenado en ptr " << ptr <<endl;
    cout << "Valor al que apunta ptr " << *ptr <<endl;

    return 0;

}