#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numero , coeficiente = 0;

    printf("Numero inteiro para o triangulo pascal: \n");
    scanf("%d", &numero);

    for (int i = 0; i <= numero ; i++){
        printf("[%d] ", i);
        for (int j = 0; j <= i; j++){
            if (i == 0 || j == 0) {//só quando está na 1ª linha ou em todas as 1ª colunas
                coeficiente = 1;
            } else { //aplica o coeficiente se não for a 1ª linha e as 1ª colunas
                coeficiente = coeficiente * (i - j + 1)/j ;
            }
            printf("%d ", coeficiente);
        }
        printf("\n");
    }
    return 0;
}