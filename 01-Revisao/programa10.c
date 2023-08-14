#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define QTD_LINHAS 4
#define QTD_COLUNAS 4

/**
 * Faça um programa que crie uma matriz 4x4, calcule e mostre:
• A soma dos elementos da primeira linha
• O produto dos elementos da primeira coluna
• A soma da diagonal principal
• A soma de todos os elementos da matriz
 * 
 * */

int main() {
    setlocale(LC_ALL,"Portuguese");
    int matriz[QTD_LINHAS][QTD_COLUNAS];
    int lin, col, soma_primeira_linha = 0, produto_primeira_coluna,
        soma_diagonal_principal = 0, soma_geral = 0;

    //popular a matriz com números aleatórios/randômicos
    srand(time(NULL));
    for (lin = 0; lin < QTD_LINHAS; lin++) {
        for (col = 0; col < QTD_COLUNAS; col++) {
            matriz[lin][col] = rand() % 20;
        }
    }
    //exibir a matriz
    for (lin = 0; lin < QTD_LINHAS; lin++) {
        for (col = 0; col < QTD_COLUNAS; col++) {
            printf("%d\t", matriz[lin][col]);
            soma_geral = soma_geral + matriz[lin][col];
        }
        printf("\n");
    }

    for (col = 0; col < QTD_COLUNAS; col++) {
        soma_primeira_linha = soma_primeira_linha + matriz[0][col];
    }
    printf("Soma da primeira linha: %d\n", soma_primeira_linha);

    produto_primeira_coluna = matriz[0][0];
    for (lin = 1; lin < QTD_LINHAS; lin++) {
        produto_primeira_coluna = produto_primeira_coluna * matriz[lin][0];
    }
    printf("Produto da primeira coluna: %d\n", produto_primeira_coluna);

    for (lin = 0; lin < QTD_LINHAS; lin++) {
        soma_diagonal_principal = soma_diagonal_principal + matriz[lin][lin];
    }
    printf("Soma da diagonal principal: %d\n", soma_diagonal_principal);

    printf("Soma geral: %d\n", soma_geral);
    return 1;
}