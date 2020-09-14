#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

typedef struct {
	int matricula;
	char nome[100];
	char sexo;
} Aluno;

int main() {
	Aluno vetor[TAM];
	//vetor[0]				vetor[1]				vetor[2]
	//matricula= -10  		//matricula= 1  		//matricula= 15
	//nome= Jonathan		//nome= Lucca			//nome= Leandro
	//sexo=M				//sexo= M				//sexo= M

	int i;
	
	for (i = 0; i < TAM; i++) {
		printf("Matricula: ");
		scanf("%d", &vetor[i].matricula);
		fflush(stdin);

		printf("Nome: ");
		scanf("%s", vetor[i].nome);
		fflush(stdin);

		printf("Sexo [M ou F]: ");
		scanf("%c", &vetor[i].sexo);
		fflush(stdin);
		printf("\n");
	}

	for (i = 0; i < TAM; i++) {
		printf("Matricula: %d\n", vetor[i].matricula);
		printf("Nome: %s\n", vetor[i].nome);
		printf("Sexo: %c\n", vetor[i].sexo);
		printf("======================\n");
	}

	int menorMatricula = vetor[0].matricula;
	int indiceMenorMatricula = 0;

	for (i = 1; i < TAM; i++) {
		if (vetor[i].matricula < menorMatricula) {
			menorMatricula = vetor[i].matricula;
			indiceMenorMatricula = i;
		}
	}

	printf("\n\nO aluno de menor matrícula é: %s, com a matrícula %d\n",vetor[indiceMenorMatricula].nome, vetor[indiceMenorMatricula].matricula);


	

	return 1;
}