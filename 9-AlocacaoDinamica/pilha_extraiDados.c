#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
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



Celula *popularPilha(char *linha, Celula *topo) {
    //na linha deve ter: matricula, nome, 
    char palavra[100];
    int i, j;
    int contaArroba = 0;
    int matricula;
    char nome[100];

    for (i = 0, j = 0; i < strlen(linha)+1; i++) {
        if (linha[i] != '@' && linha[i] != '\0' && linha[i] != '\n' ) {
            palavra[j] = linha[i];
            j++;
        } else {
            contaArroba++;
            palavra[j] = '\0';
            if (palavra[0] != '\0') {
                switch (contaArroba) {
                    case 1 : //matricula
                            matricula = atoi(palavra);
                            break;
                    case 2 : //nome
                            strcpy(nome, palavra);
                            break;      
                }
            }
            j = 0;
            strcpy(palavra, "");
        }
    }
    topo = inserir(matricula,nome,topo);

    return topo;
}

Celula *abrirArquivoPopularPilha(Celula *topo) {
    FILE *procuradorArquivo;
    procuradorArquivo = fopen("dados.dat", "r");

    if (!procuradorArquivo) {
        printf("Base de dados corrompida....\n");
        exit(0);
    }

    char linha[100];
    while (fgets(linha,100,procuradorArquivo)) {
        topo = popularPilha(linha, topo); 
    }
    fclose(procuradorArquivo);

    return topo;
}


int main() {
    Celula *pilhaPessoas = NULL;

    pilhaPessoas = abrirArquivoPopularPilha(pilhaPessoas);
    exibir(pilhaPessoas);

    return 1;
}