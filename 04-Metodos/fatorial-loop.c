// há computações com complexidade mais alta e mais baixa
// complexidade de um algortimo ou de um programa é o esforço que o computador precisa fazer
// fatorial, por exemplo, é a maior complexidade para um computador, ou seja, é o maior esforço que ele pode fazer

#include <stdio.h>
#include <stdlib.h>

int recebeNumero() {
    int numero;
    do {
        printf("Informe um número inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0); 
    return numero;
}

long double fatorial(int numero) {
    long double resultado = numero;
    int i;
    if (numero == 0 || numero == 1) return 1;
    
    for (i = numero - 1; i > 1; i--) {
        resultado = resultado * i;
    }
    return resultado;
}

int main() {
    long long int numero = recebeNumero();
    long long int i;
    for (i = 0; i <= numero; i++) {
        printf("%lld tem o fatorial de:\n %.0Lf\n\n", i, fatorial(i));
    }
    return 1;
}