#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 10
/*
 * 
 * 6 – Faça um algoritmo que possua dois vetores, 
 * um preenchido com valores seqüenciais de 0 a 9 e outro com valores sequenciais de 10 a 19, 
 * e intercale-os num terceiro vetor formando uma nova variável. Mostre o vetor obtido.
 */
int main() {
    setlocale(LC_ALL,"Portuguese");
    int vetor[N];
    int vetor2[N];
    int vetor3[N + N];
    int i;
    
    printf("Números do vetor1\n");
    for (i = 0 ; i < N ; i++){
        vetor[i] = i;
        printf("%d\n", vetor[i]);
    }
    printf("números do vetor2\n");
    for (i = 0 ; i < N ; i++){
        vetor2[i] = i + 10;
        printf("%d\n", vetor2[i]);
    }
    printf("números do vetor3\n");
    for (i = 0 ; i < N ; i++){
        vetor3[i*2] = vetor[i]; // inserindo nas posições pares do vetor 3
        vetor3[i * 2 + 1] = vetor2[i]; // inserindo nas posições impares do vetor 3
    }
    for (i = 0 ; i < N + N ; i++){
        printf("%d\n", vetor3[i]);
    }
    return 1;
}