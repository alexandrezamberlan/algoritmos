#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase1[100], frase2[100];

    printf("Digita uma frase: ");
    gets(frase1);
    fflush(stdin);

    printf("Digita outra frase: ");
    gets(frase2);
    fflush(stdin);

    printf("%s\n", frase1);
    printf("%s\n", frase2);

    printf("%d\n", strcasecmp(frase1,frase2));
    if (strcasecmp(frase1,frase2) == 0) {
        printf("as frases são iguais\n");
    } else if (strcasecmp(frase1,frase2) < 0) {
        printf("a primeira frase alfabeticamente vem antes\n");
    } else {
        printf("a primeira frase alfabeticamente vem depois\n");
    }
    //0 - se as duas frases forem iguais
    //negativo - se a primeira frase for 'menor' do que a segunda
    //positivo - se a primeira frase for 'maior' do que a segunda
    
    return 1;
}