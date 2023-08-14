#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Aluno{
    int matricula;
    char nome[100];
    float peso;
    float altura;
    float imc;
};

int main() {
    struct Aluno variavelAluno1;
    int i;
    printf("Qual a sua matrícula? ");
    scanf("%d", &variavelAluno1.matricula);
    fflush(stdin); //limpando o buffer do teclado

    printf("Qual seu nome? ");
    gets(variavelAluno1.nome);
    fflush(stdin); //limpando o buffer do teclado

    printf("Qual o seu peso (Kg)? ");
    scanf("%f", &variavelAluno1.peso);
    fflush(stdin); //limpando o buffer do teclado

    printf("Qual a sua altura (m)? ");
    scanf("%f", &variavelAluno1.altura);
    fflush(stdin); //limpando o buffer do teclado

    variavelAluno1.imc = variavelAluno1.peso / (variavelAluno1.altura * variavelAluno1.altura);
    printf("%s seu IMC é %.2f\n", variavelAluno1.nome, variavelAluno1.imc);

    if (variavelAluno1.imc < 18.5) {
        printf("Opa... você está muito magro!\n");
    } else if (variavelAluno1.imc < 24.9) {
        printf("Parabéns... você está em forma!\n");
    } else if (variavelAluno1.imc < 29.9) {
        printf("Opa... você está com sobrepeso!\n");
    } else {
        printf("Atenção... você precisa de ajuda de um profissional da Saúde!\n");
    }
    
    return 1;
}