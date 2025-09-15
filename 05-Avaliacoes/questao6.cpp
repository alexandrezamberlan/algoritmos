#include <iostream>
#define TAM 10
using namespace std;

void lerVetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Digite um numero inteiro: ";
        cin >> vetor[i];
    }
}


bool estaContido(int valor, int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        if (valor == vetor[i]) {
            return true;
        }
    }
    //sai do for e olhei todos e nao encontrei o valor, logo
    return false;
}

int main() {
    int vetor[TAM];
    int numeroPesquisa;

    lerVetor(vetor, TAM);
    
    cout << "Digite um valor inteiro para pesquisar no vetor: ";
    cin >> numeroPesquisa;

    if (estaContido(numeroPesquisa, vetor, TAM)) {
        cout << "Valor localizado no vetor....\n";
    } else {
        cout << "Valor NAO localizado no vetor....\n";
    }

    return 1;
}
