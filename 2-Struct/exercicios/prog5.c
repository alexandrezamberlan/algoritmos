/**
 * Escreva um programa que leia um vetor de produtos, com 50 elementos, sendo cada elemento
uma estrutura que contém o nome do produto, seu preço de compra e seu preço de venda.
Depois de lido o vetor, retorne o nome e o índice do produto de menor preço de compra.
 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 50

 typedef struct {
     char nome[100];
     float precoCompra;
     float precoVenda;
     float margemLucro;
 } Produto;

 int main() {
    Produto vetor[50];
    int opcao;

    int i = 0;
    do {
        system("clear"); //system("cls"); //limpa a tela
        printf("Sistema de Produtos\n\n");
        printf("Descrição do produto: ");
        gets(vetor[i].nome);
        fflush(stdin);

        printf("Preço de compra: ");
        scanf("%f", &vetor[i].precoCompra);
        fflush(stdin);

        printf("Preço de venda: ");
        scanf("%f", &vetor[i].precoVenda);
        fflush(stdin);
        
        vetor[i].margemLucro = vetor[i].precoVenda - vetor[i].precoCompra;

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
        printf("Produto        : %s\n", vetor[iAux].nome);
        printf("Preço de Venda : R$%.2f\n", vetor[iAux].precoVenda);
        printf("Preço de Compra: R$%.2f\n", vetor[iAux].precoCompra);
        printf("Lucro          : R$%.2f\n", vetor[iAux].margemLucro);
        printf("============================\n");
    }

    //localizando o produto de menor preço de compra
    int indiceMaiorLucro = 0;
    float maiorLucro = vetor[0].margemLucro;
    for (iAux = 1; iAux < i; iAux++) {
        if (vetor[iAux].margemLucro > maiorLucro) {
            indiceMaiorLucro = iAux;
            maiorLucro = vetor[0].margemLucro;
        }
    }

    printf("\n");
    printf("O produto %s possui o maior lucro: R$%.2f\n\n", vetor[indiceMaiorLucro].nome, vetor[indiceMaiorLucro].margemLucro);
    return 1;
 }
 