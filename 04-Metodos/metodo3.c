#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adivinha() {
    do {
        printf("Qual foi o núme ro sorteado? ");
        scanf("%d", &numero);
        if (numero == numeroSorteado) {
            printf("Você acertou!\n");
            break;
        } else if (numero < numeroSorteado) {
            printf("O numero sorteado é MAIOR do que você digitou!!!\n");
        } else {
            printf("O numero sorteado é MENOR do que você digitou!!!\n");
        }
    } while (1);
}


int main() {
    int numeroSorteado, numero;

    srand(time(NULL)); //ponto de chamada do método

    numeroSorteado = rand() % 10;

    adivinha(); // ponto de chamada do me'todo
    
    return 1;
}