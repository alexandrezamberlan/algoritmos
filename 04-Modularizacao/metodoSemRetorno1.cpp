#include <iostream>

#define TAM 10000

using namespace std;

#include "metodos.h"

int main() {
    int vetor[TAM];
    int quantidade = 10;

    //metodo que popule o vetor com n elementos (aleatórios) desde que menor do que TAM
    popular(vetor, quantidade, TAM); //

    //metodo que exiba o vetor
    exibir("Exibindo vetor", vetor, quantidade, TAM);

    //metodo que receba um vetor, quantidade e seu tamanho; e exiba o menor elemento
    menorElemento(vetor, quantidade, TAM);

    //metodo que receba um vetor, quantidade e seu tamanho e ordene crescente o vetor - bolha
    ordenar(vetor, quantidade, TAM);

    return 1;
}