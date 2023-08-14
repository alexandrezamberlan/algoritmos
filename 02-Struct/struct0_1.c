#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TAM 3

struct Aluno{
    int matricula;
    char nome[100];
    float peso;
    float altura;
    float imc;
};

int main() {
    struct Aluno vetor[TAM];
    int i;

    for (i = 0; i < TAM; i++) {

        printf("Qual a sua matrícula? ");
        scanf("%d", &vetor[i].matricula);
        fflush(stdin); //limpando o buffer do teclado

        printf("Qual seu nome? ");
        gets(vetor[i].nome);
        fflush(stdin); //limpando o buffer do teclado

        printf("Qual o seu peso (Kg)? ");
        scanf("%f", &vetor[i].peso);
        fflush(stdin); //limpando o buffer do teclado

        printf("Qual a sua altura (m)? ");
        scanf("%f", &vetor[i].altura);
        fflush(stdin); //limpando o buffer do teclado

        vetor[i].imc = vetor[i].peso / (vetor[i].altura * vetor[i].altura);
        printf("%s seu IMC é %.2f\n", vetor[i].nome, vetor[i].imc);

        if (vetor[i].imc < 18.5) {
            printf("Opa... você está muito magro!\n");
        } else if (vetor[i].imc < 24.9) {
            printf("Parabéns... você está em forma!\n");
        } else if (vetor[i].imc < 29.9) {
            printf("Opa... você está com sobrepeso!\n");
        } else {
            printf("Atenção... você precisa de ajuda de um profissional da Saúde!\n");
        }
    }

    for (i = 0; i < TAM; i++) {
        printf("%s - %.2f\n", vetor[i].nome, vetor[i].imc);
    }
    return 1;
}