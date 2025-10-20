#include <iostream>
#include <ctime>

#define TAM 3
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

void menorMaior(int *v, int n, int *menor, int *maior) {
    *menor = v[0];
    *maior = v[0];
    for (int i = 0; i < n; i++) {
        if (v[i] < *menor) {
            *menor = v[i];
        }
        if (v[i] > *maior) {
            *maior = v[i];
        }
    }
}

int main() {
   int vetor[TAM];
   popula(vetor, TAM);
   exibe(vetor, TAM);

   int menor;
   int maior;
   menorMaior(vetor, TAM, &menor, &maior);

   cout << "Menor: " << menor << endl;
   cout << "Maior: " << maior << endl;
}