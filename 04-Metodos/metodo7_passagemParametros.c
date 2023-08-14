#include <stdio.h>
#include <stdlib.h>


void preenche(char nome[]) {
    printf("Seu nome é: ");
    gets(nome);
    fflush(stdin);
}

int main() {
    char nome[100];
    preenche(nome); //passagem de parâmetro por referência, pois toda matriz/vetor é um ponteiro
    printf("Nome preenchido: %s\n", nome);
    return 1;
}