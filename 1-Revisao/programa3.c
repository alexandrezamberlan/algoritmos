#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define TAM 10

/**
 * Escreva um algoritmo para calcular o reajuste salarial de uma empresa que possui 1000 
 * funcionários, de acordo com os seguintes critérios:
• os funcionários com salário inferior a 10.000 devem receber 55% de reajuste
• os funcionários com salário entre 10.000 e 25.000 devem receber 30% de reajuste.
• os funcionários com salário acima de 25.000 devem receber 20% de reajuste.
 */ 
int main() {
    setlocale(LC_ALL,"Portuguese");
    int vetor_salarios[TAM];
    int i;
    float valor_reajuste;
    srand(time(NULL)); //semeador.... toda vez que o código é executado, números aleatórios são criados

    //popular com números randomicos, 1000 salários na faixa de 1100 até 30000
    for (i = 0; i < TAM; i++){
        vetor_salarios[i] = (rand() % 28900) + 1100;
    }

    //passar pelo vetor de salários e reajustar conforme tabela
    //os funcionários com salário inferior a 10.000 devem receber 55% de reajuste
    //os funcionários com salário entre 10.000 e 25.000 devem receber 30% de reajuste.
    //os funcionários com salário acima de 25.000 devem receber 20% de reajuste.
    for (i = 0; i < TAM; i++){
        //vetor_salarios[i]  -> 100
        //valor_reajuste     -> 55
        if (vetor_salarios[i] < 10000) {
            valor_reajuste = vetor_salarios[i] * 55 / 100;
            printf("Salário R$ %d", vetor_salarios[i]);
            vetor_salarios[i] = vetor_salarios[i] + valor_reajuste;
            printf(" - Salário reajustado R$ %d\n", vetor_salarios[i]);
        } else if (vetor_salarios[i] < 25000) {
            valor_reajuste = vetor_salarios[i] * 30 / 100;
            printf("Salário R$ %d", vetor_salarios[i]);
            vetor_salarios[i] = vetor_salarios[i] + valor_reajuste;
            printf(" - Salário reajustado R$ %d\n", vetor_salarios[i]);
        } else {
            valor_reajuste = vetor_salarios[i] * 20 / 100;
            printf("Salário R$ %d", vetor_salarios[i]);
            vetor_salarios[i] = vetor_salarios[i] + valor_reajuste;
            printf(" - Salário reajustado R$ %d\n", vetor_salarios[i]);
        }
    }
    return 1;
}