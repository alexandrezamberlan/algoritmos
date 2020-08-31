#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
1.	Escreva um programa que faça o controle das informações relativas aos 
funcionários de uma determinada empresa. As informações que devem ser 
armazenadas são: NOME, SALÁRIO, CARGO, IDADE e SEXO. 
Defina a estrutura de dados e faça a leitura e exibição dos dados para um 
funcionário.
*/
typedef struct {
	char nome[100];
	double salario;
	char cargo[100];
	int idade;
	char sexo; //M ou F
} Funcionario;

int main() {
	Funcionario umFuncionario;

	printf("Lendo dados de um funcionario\n");
	printf("Nome: ");
	scanf("%s", umFuncionario.nome);
	fflush(stdin); //limpeza do buffer do teclado
	printf("Salario: ");
	scanf("%d", &umFuncionario.salario);
	printf("Cargo: ");
	scanf("%s", umFuncionario.cargo);
	fflush(stdin); //limpeza do buffer do teclado
	printf("Idade: ");
	scanf("%d", &umFuncionario.idade);
	printf("Sexo [M / F]: ");
	scanf("%c", &umFuncionario.sexo);

	printf("Exibindo dados de um funcionario\n");
	printf("Nome: %s. Cargo: %s\n\n", umFuncionario.nome, umFuncionario.cargo);

	return 1;
}








