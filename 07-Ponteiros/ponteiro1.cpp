#include <iostream>

using namespace std;

void troca(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 10;
    int b = 5;
    
    troca(&a, &b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}