#include <stdio.h>
#include <string.h>
#include <ctype.h>


void exibeEmMaiusuculo(char f[]) {
    int i;
    int tamanho = strlen(f);
    for (i = 0; i < tamanho; i++) {
        f[i] = toupper(f[i]);
    }
    printf("Frase em maiúsculo: %s\n", f);
}

int main() {
    char frase[100];
    
    printf("Digite uma frase qualquer: "); 
    gets(frase);
    exibeEmMaiusuculo(frase);
    
    return 1;
}