#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char nome[100];
} Aluno;

void exibe(Aluno *vetor, int qtdAlunos) {
    int i;
    for (i = 0; i < qtdAlunos; i++) {
        printf("%d: %s\n", vetor[i].matricula, vetor[i].nome);
    }
}

void popula(Aluno *vetor, int qtdAlunos) {
    int i;
    for (i = 0; i < qtdAlunos; i++) {
        printf("Entre com a matrícula: ");
        scanf("%d", &vetor[i].matricula);
        fflush(stdin);

        printf("Entre com o nome: ");
        gets(vetor[i].nome);
        fflush(stdin);
    }
}

int main() {
    Aluno *vetor; //todo vetor é um ponteiro
    int qtdAlunos = 3; //poderia ser perguntado ao usuario

    vetor = malloc(sizeof(int) * qtdAlunos);

    //1o parametro é passado por referência, pois é uma matriz/vetor
    //2o parametro é passado por valor (cópia), pois é uma variável simples/primitiva
    popula(vetor, qtdAlunos);
    exibe(vetor, qtdAlunos);

    return 1;
}