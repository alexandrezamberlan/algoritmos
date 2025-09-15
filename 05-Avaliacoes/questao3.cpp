#include <iostream>
#include <ctime>
#include <cstdlib>


#define TAM 5

using namespace std;

int funcaoMaiorValor(int vetor[], int n) {
    int maior = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int vetor[TAM];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 40;
        cout << "valor sorteado...." << vetor[i] << endl;
    }

    int maiorValor = funcaoMaiorValor(vetor, TAM);//utilidade é que a função executa somente uma operação, que é localizar o maior

    cout << "O maior valor do vetor eh..." << maiorValor << endl;

    return 1;
}