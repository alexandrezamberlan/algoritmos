#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

typedef struct {
	int matricula;
	char nome[100];
} Aluno;

int main() {
	Aluno umAluno;
	Aluno vetorAlunos[TAM];
	int i;

	printf("Trabalhando com vetor tipo Aluno com %d posicoes\n", TAM);
	for (i = 0; i < TAM; i++) {
		printf("%d - Aluno\n", i+1);
		printf("Nome: ");
		scanf("%s", vetorAlunos[i].nome);

		fflush(stdin); //limpeza do buffer do teclado

		printf("Matricula: ");
		scanf("%d", &vetorAlunos[i].matricula);
		printf("\n");
	}

	printf("\nExibindo o vetor de alunos\n");
	for (i = 0; i < TAM; i++) {
		printf("%d - Aluno: ", i+1);
		printf("%d \t %s\n", vetorAlunos[i].matricula, vetorAlunos[i].nome);
	}

	return 1;
}