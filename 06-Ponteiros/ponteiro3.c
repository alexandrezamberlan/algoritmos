#include <stdlib.h>
#include <stdio.h>

typedef struct  {
    int dia;
    int mes;
    int ano;
}DMA;

void atualizar(DMA *pData) {
    // (*pData).dia = 19;
    // (*pData).mes = 10;
    // (*pData).ano = 2020;

    pData->dia = 19;
    pData->mes = 10;
    pData->ano = 2020;
}

void atualizarMes(DMA *pData) {
    pData->mes = 12;
}

int main() {
    DMA data;

    atualizar(&data);

    printf("%d/%d/%d\n", data.dia, data.mes, data.ano);

    atualizarMes(&data);
    printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
    
    return 1;
}