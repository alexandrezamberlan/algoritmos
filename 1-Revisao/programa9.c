#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define QTD_LINHAS 5
#define QTD_COLUNAS 5
#define TAM 10
/**
 * 9 – Ler uma matriz de inteiros com ordem 10x10, sem elementos duplicados. 
 * Ler, a seguir, 10 valores e verificar se cada valor lido é um dos elementos da matriz. 
 * Se o valor for encontrado na matriz, exibir o valor encontrado e a posição do elemento 
 * na matriz (por exemplo: “O valor X foi encontrado na posição I,J da matriz”).
 * 
 * */

int main() {
    setlocale(LC_ALL,"Portuguese");
    int matriz[QTD_LINHAS][QTD_COLUNAS];
    int vetor[TAM];
    int lin, col, valor = 0, i;
    //popular a matriz com números aleatórios/randômicos
    srand(time(NULL));
    for (lin = 0; lin < QTD_LINHAS; lin++) {
        for (col = 0; col < QTD_COLUNAS; col++) {
            matriz[lin][col] = ++valor;
        }
    }
    //exibir a matriz
    for (lin = 0; lin < QTD_LINHAS; lin++) {
        for (col = 0; col < QTD_COLUNAS; col++) {
            printf("%d\t", matriz[lin][col]);
        }
        printf("\n");
    }
    //preencher o vetor de inteiros
    for (i = 0; i < TAM; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);

        //procurar na matriz se o valor digitado no vetor esta cadastrado lá
        for (lin = 0; lin < QTD_LINHAS; lin++) {
            for (col = 0; col < QTD_COLUNAS; col++) {
                if (vetor[i] == matriz[lin][col]) {
                    printf("%d encontrado em linha %d coluna %d\n", vetor[i], lin, col);
                }
            }
        }
    }

    return 1;
}