#include <iostream>
using namespace std;

int main() {
    int valor;
    int *enderecoValor;

    valor = 100;
    cout << valor << endl;          //100
    cout << &valor << endl;         //ABC100
    enderecoValor = &valor;         //ABC100
    cout << enderecoValor << endl;  //ABC100
    cout << *enderecoValor << endl; //100



    int i = 5;
    int *enderecoi = &i;

    cout << i << endl;
    cout << *enderecoi << endl;
    cout << enderecoi << endl;
    cout << &i << endl;


    return 1;
}