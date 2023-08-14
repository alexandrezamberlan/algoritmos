#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];
    
    strcpy(frase, "turma de algoritmos\n");
    printf("%s", frase);
    int tamanho = strlen(frase);
    printf("O tamanho da frase é: %d\n\n", tamanho);

    int i;
    for (i = 0; i < tamanho; i++) {
        frase[i] = toupper(frase[i]);
    }

    printf("\n\n%s", frase);
    
    return 1;
}