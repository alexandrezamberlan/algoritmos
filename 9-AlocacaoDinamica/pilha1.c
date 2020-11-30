#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct no {
    int matricula;
    char nome[100];
    struct no *prox;
} Celula;


Celula *inserir(int matricula, char *nome, Celula *topo) {
    Celula *novo;

    //aloca memória
    novo = (Celula *)malloc(sizeof(Celula));
    //deposita os valores dos parametros
    novo->matricula = matricula;
    strcpy(novo->nome, nome);
    novo->prox = topo;
    //encadeia
    return novo;
}

void exibir(Celula *topo) {
    Celula *p;

    for (p = topo; p != NULL ; p = p->prox) {
        printf("Matricula: %d - Nome: %s\n", p->matricula, p->nome);
    }
    printf("\n");
}

int main() {
    Celula *pilha = NULL;

    pilha = inserir(1000,"alexandre", pilha);
    pilha = inserir(1001,"igor", pilha);
    pilha = inserir(1002,"alex", pilha);
    pilha = inserir(1003,"pedro", pilha);

    exibir(pilha);

    return 1;
}