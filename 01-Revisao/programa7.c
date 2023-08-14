#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
 * 
6 – Faça um algoritmo que possua dois vetores, 
um preenchido com valores seqüenciais de 0 a 9 e outro com valores sequenciais de 10 a 19, e intercale-os num terceiro vetor formando uma nova variável. Mostre o vetor obtido.
 */
int main() {
    setlocale(LC_ALL,"Portuguese");
    int codigo_vendedor;
    float salario_fixo_vendedor;
    float total_vendas_vendedor;
    float comissao_final_vendedor; //3% ->1000; 5% ->2000; 10% -> +2000
    float salario_total_vendedor;
    //receber o codigo do vendedor
    printf("Informe o código do vendedor: "); //puts("Informe o código do vendedor");
    scanf("%d", &codigo_vendedor);
    //receber o salario fixo do vendedor
    printf("Informe o salário fixo do vendedor: ");
    scanf("%f", &salario_fixo_vendedor);
    //receber o total de vendas do vendedor
    printf("Informe o total de vendas do vendedor: ");
    scanf("%f", &total_vendas_vendedor);
    //calcular a comissao final do vendedor
    if (total_vendas_vendedor <= 1000) {//seleção aninhada
        //calcular 3%
        //total_vendas_vendedor   -> 100
        //comissao_final_vendedor -> 3
        comissao_final_vendedor = (total_vendas_vendedor * 3)/100;
    } else if (total_vendas_vendedor < 2000) {
        //calcular 5%
        comissao_final_vendedor = (total_vendas_vendedor * 5)/100;
    } else {
        //calcular 10%
        comissao_final_vendedor = (total_vendas_vendedor * 10)/100;
    }
    //somar comissão ao salário fixo do vendedor
    salario_total_vendedor = salario_fixo_vendedor + comissao_final_vendedor;
    //mostra todos os dados
    printf("O vendedor %d tem salário final de %.2f\n", codigo_vendedor, salario_total_vendedor);
    return 1;
}