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

Celula *excluir(int matricula, Celula *topo) {
    if (topo == NULL) {
        printf("Estrutura vazia\n");
        return topo;
    }
    Celula *pR, *p;
    for (pR = NULL, p = topo; p != NULL; pR = p, p = p->prox) {
        if (matricula == p->matricula) {//achei e vou excluir
            //se eh o primeiro valor
            if (p == topo) {
                topo = p->prox;
                free(p);
            }else if (p->prox == NULL) { //se eh o último valor
                pR->prox = NULL;
                free(p);
            } else { //se esta em alguma posiçao do meio
                pR->prox = p->prox;
                free(p);
            }
        }
    }
    return topo;
}

int main() {
    Celula *pilha = NULL;
    int matricula;

    pilha = inserir(1000,"alexandre", pilha);
    pilha = inserir(1001,"igor", pilha);
    pilha = inserir(1002,"alex", pilha);
    pilha = inserir(1003,"pedro", pilha);

    exibir(pilha);


    printf("Matricula a ser excluída: ");
    scanf("%d", &matricula);

    pilha = excluir(matricula,pilha);
    exibir(pilha);

    return 1;
}