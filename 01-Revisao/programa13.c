#include <stdio.h>
#include <stdlib.h>
/*
A Federação Gaúcha de Futebol contratou um estudante de Sistemas de Informação para fazer um levantamento 
estatístico do resultado de vários Grenais. 

Escreva um programa que leia para cada Grenal, o número de gols marcados pelo Grêmio 
e o número de gols marcados pelo Internacional, imprimindo o nome do time vitorioso ou a palavra EMPATE. 

Após, ele deve escrever a mensagem:
Novo Grenal (1. Sim 2. Não)?
e solicitar uma resposta. Se a resposta for 1, o algoritmo deve solicitar novamente o número de gols marcados 
pelos times em uma nova partida; se a resposta for 2, ele deve ser encerrado imprimindo:
• quantos Grenais fizeram parte da estatística;
• o número de vitórias do Grêmio;
• o número de vitórias do Internacional;
• o número de empates; e
• uma mensagem indicando qual o time que venceu o maior número de Grenais (ou “Não houve vencedor”).
*/

int main() {
    int quantidadeGrenais = 0;
    int golsGremio, golsInter;
    int numeroVitoriasGremio = 0, numeroVitoriasInter = 0, numeroDeEmpates = 0;
    int opcao;
    do {
        quantidadeGrenais++;
        do {
            printf("Neste GRENAL, quantos gols o Grêmio marcou? ");
            scanf("%d", &golsGremio);
            if (golsGremio < 0 || golsGremio > 100) {
                printf("Número inválido. Redigite\n");
            } else break;
        } while (1);

        //C o tipo booleano é int (1 - true; 0 - false)

        do {
            printf("Neste GRENAL, quantos gols o Inter marcou? ");
            scanf("%d", &golsInter);
            if (golsInter < 0 || golsInter > 100) {
                printf("Número inválido. Redigite\n");
            } else break;
        } while (1);

        if (golsGremio > golsInter) {
            printf("Grêmio venceu este GRENAL\n");
            numeroVitoriasGremio++; //numerosVitoriasGremio = numeroVitoriasGremio + 1;
        } else if (golsGremio < golsInter) {
            printf("Inter venceu este GRENAL\n");
            numeroVitoriasInter++;
        } else {
            printf("GRENAL empatado\n");
            numeroDeEmpates++;
        }
        printf("Novo Grenal (1. Sim 2. Não)? ");
        scanf("%d", &opcao);
    } while (opcao == 1);

    printf("Foram realizados %d GRENAIS\n", quantidadeGrenais);
    printf("Grêmio venceu %d GRENAIS\n", numeroVitoriasGremio);
    printf("Inter venceu %d GRENAIS\n", numeroVitoriasInter);
    printf("Foram %d empates em GRENAIS\n", numeroDeEmpates);

    if (numeroVitoriasGremio > numeroVitoriasInter) {
        printf("Grêmio foi o grande vencedor\n");
    } else if (numeroVitoriasGremio < numeroVitoriasInter) {
        printf("Inter foi o grande vencedor\n");
    } else {
        printf("Não houve nem vencedor e nem perdedor\n");
    }

    return 1;
}