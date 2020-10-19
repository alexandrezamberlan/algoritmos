#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

void popular(int *v, int n) {
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
}

void exibir(int *v, int n) {
   int i; 
   for (i = 0; i < n; i++) {
        printf("%d\t", v[i]);
    }
    printf("\n");
}

int main() {
    int *vetor;
    int quantidade;
    char letra;
    
    setlocale(LC_ALL,"Portuguese");


    do {
        system("clear");
        printf("Quantos números quer cadastrar? (ou -1 para sair) ");    
        scanf("%d", &quantidade);
        fflush(stdin);
        if (quantidade == -1) break;

        //alocação dinâmica do vetor
        vetor = malloc(sizeof(int) * quantidade);
        popular(vetor, quantidade);
        exibir(vetor, quantidade);

        //desalocando dinamicamente o vetor
        free(vetor);
        letra = getchar();

    } while (1);

    return 1;
}