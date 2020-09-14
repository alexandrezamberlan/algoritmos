/**
 * A loja VendeTudo possui 50 clientes. 
 * O gerente, para cada cliente, necessita armazenar o nome, cidade onde mora, o total da compra e o mês 
 * que o cliente comprou.
 */
 
#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct {
	char nome[50];
    char cidade[50];
    float totalCompraMes;
    char mesDaCompra[100];
} Cliente;

int main() {
    Cliente vetor[TAM];
    int i, iAux;
    int opcao;

    //recebendo dados dos clientes
    i = 0;
    do {
        system("clear"); //para o windows, usar system("cls"); para limpar
        printf("Você vai ler os dados do CLIENTE: %d\n", i+1);
        
        printf("Nome: ");
        //scanf("%s", vetor[i].nome);
        gets(vetor[i].nome);
        fflush(stdin);

        printf("Cidade: ");
        //scanf("%s", vetor[i].cidade);
        gets(vetor[i].cidade);
        fflush(stdin);
        
        printf("Total de compras no mês: ");
        scanf("%f", &vetor[i].totalCompraMes);
        fflush(stdin);
        
        printf("Qual o mês da compra? ");
        scanf("%s", vetor[i].mesDaCompra);

        printf("=======================================\n");
        i++;
        if (i == TAM) {
            printf("Estrutura lotou....\n");
            break;
        }
        printf("1 - Continuar; 2 - Sair: ");
        scanf("%d", &opcao);
        fflush(stdin);
    } while (opcao == 1); 

    system("clear");  //para o windows, usar system("cls"); para limpar
    //exibindo dados dos clientes
    printf("\n\nLISTA DE CLIENTES CADASTRADOS\n");
    
    for (iAux = 0; iAux < i; iAux++) {
        printf("%s\n%s\nR$ %.2f\n%s\n", vetor[iAux].nome, vetor[iAux].cidade, vetor[iAux].totalCompraMes, vetor[iAux].mesDaCompra);
        printf("--------------------\n");
    }

    return 1;
}