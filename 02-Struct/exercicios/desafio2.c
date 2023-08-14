/**
 * Escreva um programa que cadastre partidas de futebol em vetorPartidas. 
O programa deve apresentar o menu
1 - Inserir partida; 2 - Listar partidas; 3 - Localizar partida; 4 - Sair: 
 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 50

 typedef struct {
    char timeMandante[100];
    char timeVisitante[100];
    int golsMandante;
    int golsVisitante;
    int rodada;
 } Partida;

 int main() {
    Partida vetor[50];
    int opcao;

    int i = 0;
    do {
        system("clear"); //system("cls"); //limpa a tela
        printf("Sistema de Gestão de Partidas de Futebol\n\n");
        
        printf("Número da rodada: ");
        scanf("%d", &vetor[i].rodada);
        fflush(stdin);

        printf("Time mandante: ");
        gets(vetor[i].timeMandante);
        fflush(stdin);

        printf("Time visitante: ");
        gets(vetor[i].timeVisitante);
        fflush(stdin);

        printf("Gols do mandante: ");
        scanf("%d", &vetor[i].golsMandante);
        fflush(stdin);

        printf("Gols do visitante: ");
        scanf("%d", &vetor[i].golsVisitante);
        fflush(stdin);
        
        i++;

        if (i == TAM) {
            printf("Estrutura lotou... sistema encerrando ...");
            break;
        }
        printf("1 - Continua; 2 - Termina: ");
        scanf("%d", &opcao);
        fflush(stdin);
    } while (opcao == 1);

    printf("Exibindo partidas cadastradas!!\n\n");
    int iAux;
    for (iAux = 0; iAux < i; iAux++) {
        printf("Rodada %d\n", vetor[iAux].rodada);
        printf("%s: %d X %d :%s\n", vetor[iAux].timeMandante, vetor[iAux].golsMandante, vetor[iAux].golsVisitante, vetor[iAux].timeVisitante);
        printf("============================\n");
    }

    
    return 1;
 }
 