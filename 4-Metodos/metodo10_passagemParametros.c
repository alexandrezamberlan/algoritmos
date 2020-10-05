#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void paraMaiusculo(char *n) {
    int i;
    int tamanho = strlen(n);
    for (i = 0; i < tamanho; i++) {
        n[i] = toupper(n[i]);
    }
}


int main() {
    char nome[100];
    printf("Seu nome: ");
    gets(nome);

    //o parametro é passado por referencia, pois nome é um vetor e todo vetor é um ponteiro
    paraMaiusculo(nome);
    
    printf("Em maiúsculo: %s\n", nome);
    return 1;
}