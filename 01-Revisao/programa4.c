#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//strlen - string length -> comprimento da variável vetor de caracteres
/**
 * Faça um programa que leia uma palavra qualquer e depois mostre apenas as vogais.
 */ 
int main() {
    setlocale(LC_ALL,"Portuguese");
    char frase[100];
    int i;

    //recebe a frase qualquer
    printf("Digite uma frase qualquer: "); //puts("Digite uma frase qualquer: "); 
    gets(frase); //uma string é um vetor de caracteres
   
    //passar pelo vetor de caracteres frase analisando caracter a caracter
    for (i = 0; i < strlen(frase) ; i++){
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')) {
            printf("%c",frase[i]);
        }
    }
    printf("\n\n");

    return 1;
}