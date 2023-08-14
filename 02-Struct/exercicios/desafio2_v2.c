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
    char letra;
    int iAux;

    int i = 0;
    do {
        system("clear"); //system("cls"); //limpa a tela
        printf("Sistema de Gestão de Partidas de Futebol\n\n");

        printf("1 - Inserir partida; 2 - Listar partidas; 3 - Localizar partida; 4 - Sair: ");
        scanf("%d", &opcao);
        fflush(stdin);

        if (opcao == 1) {
            //inserir
            if (i == TAM) {
                printf("Estrutura lotou... impossível cadastrar ...\n");
            } else {
                printf("Cadastrando uma partida!!\n\n");
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
            }
        } else if (opcao == 2) {
            //listar 
            printf("Exibindo partidas cadastradas!!\n\n");
            if (i == 0) {
                printf("Nenhuma partida cadastrada....\n");
            }
            
            for (iAux = 0; iAux < i; iAux++) {
                printf("Rodada %d\n", vetor[iAux].rodada);
                printf("%s: %d X %d :%s\n", vetor[iAux].timeMandante, vetor[iAux].golsMandante, vetor[iAux].golsVisitante, vetor[iAux].timeVisitante);
                printf("============================\n");
            }
            printf("Tecle enter para continuar: ");
            letra = getchar();
            //system("pause"); //no windows
        } else if (opcao == 3) {
            //localizar 
            int rodada;
            printf("Procurando partidas cadastradas!!\n\n");
            if (i == 0) {
                printf("Nenhuma partida cadastrada....\n");
            } else {
                printf("Informe a rodada de pesquisa: ");
                scanf("%d", &rodada);
                fflush(stdin);
                int localizou = 0;
                for (iAux = 0; iAux < i; iAux++) {
                    if (rodada == vetor[iAux].rodada) {
                        printf("%s: %d X %d :%s\n", vetor[iAux].timeMandante, vetor[iAux].golsMandante, vetor[iAux].golsVisitante, vetor[iAux].timeVisitante);
                        printf("============================\n");
                        localizou = 1; //avisando o programa que uma partida foi localizada no vetor
                    }
                }
                if (localizou == 0) {
                    printf("Nenhuma partida cadastrada nesta rodada!!\n");
                }
            }
            printf("Tecle enter para continuar: ");
            letra = getchar();
            //system("pause"); //no windows
        } else if (opcao == 4) {
            printf("Obrigado por usar o programa!!\n");
        }        
    } while (opcao != 4);

    return 1;
 }
 