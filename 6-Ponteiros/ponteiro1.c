#include <stdlib.h>
#include <stdio.h>

int main() {
    int numero = 10;
    int *ponteiro;
    
    ponteiro = &numero;

    printf("Valor inteiro da variavel numero: %d\n", numero);
    printf("Valor inteiro da variavel numero: %d\n", *ponteiro);
    
    
    printf("Endereco da variavel numero: %p\n", ponteiro);
    printf("Endereco da variavel numero: %p\n", &numero);


    *ponteiro = 999; //igual numero = 999;

    printf("Valor inteiro da variavel numero: %d\n", numero); -> 999
    printf("Valor inteiro da variavel numero: %d\n", *ponteiro); -> 999



    char nome[100];
    char *ponteiroParaNome;

    ponteiroParaNome = &nome;

    return 1;
}