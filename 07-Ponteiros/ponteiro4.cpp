#include <iostream>
#include <ctime>
#define TAM 5
using namespace std;

void popula(int *v, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 20;
    }
}

void exibe(int *v, int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
}

int main() {
   int vetor[TAM];
   popula(vetor, TAM);
   exibe(vetor, TAM);

   /*
   faça um método que receba o vetor, substitua todos os numeros pares por zero e retorne a quantidade de números que foram substituidos. Contudo, não é permitido usar return
   */
}