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

	printf("Trabalhando com uma variavel do tipo Aluno\n");
	umAluno.matricula = 1234;
	strcpy(umAluno.nome, "Carlos");
	printf("Dados de um aluno: %d -> %s\n", umAluno.matricula, umAluno.nome);

	return 1;
}