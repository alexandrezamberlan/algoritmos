#include <stdio.h>
#include <stdlib.h>

void troca(int a, int b) {
    int x;
    x = a;
    a = b;
    b = x;
}

int main() {
    int a, b;
    a = 10;
    b = 60;

    troca(a,b); //passagem de parâmetro POR VALOR == uma cópia de cada variável
    
    printf("a: %d\n");
    printf("b: %d\n");
    return 1;
}