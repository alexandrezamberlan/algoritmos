#include <stdlib.h>
#include <stdio.h>

typedef struct  {
    int dia;
    int mes;
    int ano;
}DMA;

int main() {
    DMA data;
    DMA *p;

    p = &data;

    data.dia = 19; 
    p->dia = 19;

    data.mes = 10;
    p->mes = 10;

    data.ano = 2020;
    p->ano = 2020;


    
    float v[4];
    v[0] = 100;
    v[1] = 200;
    v[2] = 300;
    v[3] = 400;


    printf("%p -> %f\n", &v[0], v[0]);
    printf("%p -> %f\n", &v[1], v[1]);
    printf("%p -> %f\n", &v[2], v[2]);
    printf("%p -> %f\n", &v[3], v[3]);

    return 1;
}