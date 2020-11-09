#include <stdio.h>
#include <stdlib.h>

void mostrarMatriculaComum(FILE *arquivo1, FILE *arquivo2) {
    int vetor1[100], vetor2[100];
    int matricula;
    char nome[100];
    int idade;
    int i1 = 0;
    int i2 = 0;
    int i,j;
    printf("Matriculas comuns nos arquivos: ");
    //rotina que retira todos os dados do arquivo1 e joga dentro de vetor1, descartando tudo o que não for matricula
    while (1) {
        if (feof(arquivo1)) break;
        fscanf(arquivo1,"%d %s %d", &matricula, nome, &idade);
        vetor1[i1] = matricula;
        i1++;
    }

    printf("\n\n");
    //rotina que retira todos os dados do arquivo2 e joga dentro de vetor2
    while (1) {
        if (feof(arquivo2)) break;
        fscanf(arquivo2,"%d", &matricula);
        vetor2[i2] = matricula;
        i2++;
    }

    for (i = 0; i < i1; i++) {
        for (j = 0; j < i2; j++) {
            if (vetor1[i] == vetor2[j]) {
                //faz algo com a matricula
                printf("%d, ", vetor1[i]);
            }
        }
    }
    printf("\n");
}

int main() {
    FILE *arquivo1, *arquivo2;
    arquivo1 = fopen("base1.txt", "r");
    arquivo2 = fopen("base2.txt", "r");

    arquivo1 = fopen("base1.txt", "r");
    arquivo2 = fopen("base2.txt", "r");
    mostrarMatriculaComum(arquivo1, arquivo2);

    fclose(arquivo1);
    fclose(arquivo2);

    return 1;
}