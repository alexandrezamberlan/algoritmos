#include <iostream>
#define TAM 10
using namespace std;

void lerVetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Digite um numero inteiro: ";
        cin >> vetor[i];
    }
}

int somarVetor(int vetor[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += vetor[i]; //total = total + vetor[i]
    }
    return total;
}


int main() {
    int vetor[TAM];

    lerVetor(vetor, TAM);
    int soma = somarVetor(vetor, TAM);

    cout << "A soma de todos os elementos eh: " << soma << endl;
    return 1;
}
