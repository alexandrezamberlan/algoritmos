#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 4

/**
 * Escrever um algoritmo para ler quatro valores inteiros, calcular a sua média, e 
 * escrever na tela os que são superiores à média.
 */ 
int main() {
    int vetor[TAM];
    int i;
    int soma = 0;
    float media;
    //receber os valores e acumular em um somatorio
    for (i = 0; i < TAM; i++) {
        printf("Digite um valor: ");
        scanf("%d",&vetor[i]); //todo vetor é um ponteiro, logo já é um endereço
        soma = soma + vetor[i];
    }
    //calcular a media
    media = soma / TAM;
    //passar no vetor para apontar/mostrar os valores acima da média
    for (i = 0; i < TAM; i++) {
        if (vetor[i] > media) {
            printf("%d é maior que a média %.1f\n", vetor[i], media);
        }
    }
    return 1;
}