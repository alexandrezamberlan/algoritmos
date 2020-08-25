#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 10
/*
 * 
 * Elabore um algoritmo que dados dois vetores inteiros de 20 posições, 
 * efetue as respectivas operações matemáticas indicadas em um terceiro vetor de 20 
 * posições de caracteres. Armazene o resultado de cada operação em outro vetor de 20 inteiros. 
 * Utilize as quatro operações aritméticas (+, -, *, /).
 */
int main() {
    setlocale(LC_ALL,"Portuguese");
    int vetor1[TAM];
    int vetor2[TAM];
 
    int vetor_soma[TAM];
    int vetor_subtracao[TAM];
    int vetor_multiplicacao[TAM];
    float vetor_divisao[TAM];
    int i;
    //popular vetor1 e vetor2
    srand(time(NULL));
    for (i = 0; i < TAM; i++) {
        vetor1[i] = rand() % 100 + 1;
        vetor2[i] = rand() % 30 + 1;
    }
    printf("Vetor 1: ");
    for (i = 0; i < TAM; i++) {
        printf("%d\t", vetor1[i]);
    }

    printf("\n\nVetor 2: ");
    for (i = 0; i < TAM; i++) {
        printf("%d\t", vetor2[i]);
    }
    printf("\n\n");

    //passar pelos vetores e aplicar as operações aritméticas
    for (i = 0; i < TAM; i++) {
        vetor_soma[i] = vetor1[i] + vetor2[i];
        vetor_subtracao[i] = vetor1[i] - vetor2[i];
        vetor_multiplicacao[i] = vetor1[i] * vetor2[i];
        vetor_divisao[i] = vetor1[i] / vetor2[i];
    }

    //passar pelos vetores resultantes e exibir seus valores
    printf("Soma: ");
    for (i = 0; i < TAM; i++) {
        printf("%d\t", vetor_soma[i]);
    }

    printf("\nSubtração: ");
    for (i = 0; i < TAM; i++) {
        printf("%d\t", vetor_subtracao[i]);
    }

    printf("\nMultiplicação: ");
    for (i = 0; i < TAM; i++) {
        printf("%d\t", vetor_multiplicacao[i]);
    }
    
    printf("\nDivisão: ");
    for (i = 0; i < TAM; i++) {
        printf("%.2f\t", vetor_divisao[i]);
    }

    printf("\n\n");
    return 1;
}