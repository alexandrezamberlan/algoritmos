// Questão 2) Construir um programa que gere aleatoriamente n números inteiros e os armazene em um vetor de tamanho TAM. Contudo, é necessário criar um método que receba: a) o vetor com os números gerados automaticamente b) o tamanho desse vetor ou a quantidade de números inseridos no vetor c) um vetor de resultado que irá armazenar somente os pares

//Ao final, o método deve retornar a quantidade de pares inseridos nesse vetor de números pares.

#include <iostream>
#include <ctime>
#define TAM 10

using namespace std;

void popularVetor(int vetor[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
    }
}

void exibirVetor(int vetor[], int n) {    
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << "\t";
    }
    cout << endl;
}

int descobrePares(int vetor[], int n, int vetorResultado[]) {
    int qtdPares = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            vetorResultado[qtdPares] = vetor[i];
            qtdPares++;
        }
    }
    return qtdPares;
}

int main() {
    int vetor[TAM];
    int vetorResultado[TAM];

    popularVetor(vetor, TAM);
    exibirVetor(vetor, TAM);
    //vetor = [1,2,3,4,5]

    int qtdPares = descobrePares(vetor, TAM, vetorResultado);
    //vetorResultado = [2,4]

    exibirVetor(vetorResultado, qtdPares);

    return 1;
}