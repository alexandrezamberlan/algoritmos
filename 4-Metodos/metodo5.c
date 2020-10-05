#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/**
 * Criar um método sem retorno que recebe como parâmetro 1 valor inteiro
 * e escreve se o valor inteiro passado no parâmetro é par ou ímpar ou zero
 */ 
void escreveSeParOuSeImpar(int numero) {
    if (numero % 2 == 0) {
        printf("%d é par.\n", numero);
    } else {
        printf("%d é ímpar.\n", numero);
    }
}

void traduzParaRomanos(int numero) {
    switch (numero) {
    case 1:
        printf("%d => I\n", numero);
        break;
    case 2:
        printf("%d => II\n", numero);
        break;
    case 3:
        printf("%d => III\n", numero);
        break;
    case 4:
        printf("%d => IV\n", numero);
        break;
    case 5:
        printf("%d => V\n", numero);
        break;
    case 6:
        printf("%d => VI\n", numero);
        break;
    case 7:
        printf("%d => VII\n", numero);
        break;
    case 8:
        printf("%d => VIII\n", numero);
        break;
    case 9:
        printf("%d => IX\n", numero);
        break;
    case 10:
        printf("%d => X\n", numero);
        break;
    
    default: 
        printf("Sistema incapaz (ainda) de traduzir\n");
        break;
    }
}

void populaVetor(int *vetor, int qtdElementos) {
    int i;
    srand(time(NULL));
    for (i = 0; i < qtdElementos; i++) {
        vetor[i] = rand() % 100;
    }
}

void exibeVetor(int *vetor, int qtdElementos) {
    int i;
    for (i = 0; i < qtdElementos; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    int numero;

    system("clear");
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    escreveSeParOuSeImpar(numero);//método com 1 parâmetro
    traduzParaRomanos(numero);

    int *vetor;
    vetor = malloc(sizeof(int) * numero);

    populaVetor(vetor, numero); //popula o vetor com quantidade de numeros aleatórios
    exibeVetor(vetor, numero);

    return 1;
}