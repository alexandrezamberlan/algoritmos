#include <stdio.h>
#include <stdlib.h>

void inicializarMatriz(int m[5][3], int linhas, int colunas) {
    int i,j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            m[i][j] = 0;
        }
    }
}

void exibirMatriz(int m[5][3], int linhas, int colunas) {
    int i,j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[5][3];
    //1o parametro: por referencia
    //2o parametro: por valor
    //3o parametro: por valor
    inicializarMatriz(matriz, 5, 3);
    exibirMatriz(matriz, 5, 3);

    return 1;
}