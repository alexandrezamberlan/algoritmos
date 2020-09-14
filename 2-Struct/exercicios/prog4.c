/**
 * A turma de Algoritmo e Programação II possui 50 alunos. Para cada aluno, é necessário
armazenar o nome, número de faltas, o valor da nota 1, nota 2, nota 3, a média das notas e o
valor da mensalidade. A média das notas é aritmética.
 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 50
 typedef struct {
     char nome[100];
     int numeroFaltas;
     float nota1;
     float nota2;
     float nota3;
     float media;
     float valorMensalidade;
 } Aluno;

 int main() {
    Aluno vetor[50];
    int opcao;

    int i = 0;
    do {
        system("clear"); //system("cls"); //limpa a tela
        printf("Sistema Acadêmico\n\n");
        printf("Nome: ");
        gets(vetor[i].nome);
        fflush(stdin);

        printf("Número de faltas: ");
        scanf("%d", &vetor[i].numeroFaltas);
        fflush(stdin);

        printf("Nota 1: ");
        scanf("%f", &vetor[i].nota1);
        fflush(stdin);

        printf("Nota 2: ");
        scanf("%f", &vetor[i].nota2);
        fflush(stdin);

        printf("Nota 3: ");
        scanf("%f", &vetor[i].nota3);
        fflush(stdin);

        vetor[i].media = (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3) / 3;

        printf("Valor da mensalidade: ");
        scanf("%f", &vetor[i].valorMensalidade);
        fflush(stdin);
        
        i++;

        if (i == TAM) {
            printf("Estrutura lotou... sistema encerrando ...");
            break;
        }
        printf("1 - Continua; 2 - Termina: ");
        scanf("%d", &opcao);
        fflush(stdin);
    } while (opcao == 1);

    printf("Exibindo dados de alunos cadastrados!!\n\n");
    int iAux;
    for (iAux = 0; iAux < i; iAux++) {
        printf("Aluno      : %s\n", vetor[iAux].nome);
        printf("Faltas     : %d\n", vetor[iAux].numeroFaltas);
        printf("Média      : %.1f\n", vetor[iAux].media);
        printf("Mensalidade: R$%.2f\n", vetor[iAux].valorMensalidade);
        printf("============================\n");
    }


    return 1;
 }
 