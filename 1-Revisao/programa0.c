#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
  int vetor[N];
  int numero;
  int i,j;
  int menorValor; 
  int jaCadastrado;

  //popular um vetor com n elementos
  //exibir o vetor com n elementos
  srand(time(NULL));
  for (i = 0; i < N; i++) {
    numero = rand() % 100;
    jaCadastrado = 0; //inicia como não cadastrado
    //pesquisar/testar se o numero nao esta no vetor
    for (j = 0; j < i; j++) {
      if (numero == vetor[j]) {
        jaCadastrado = 1;
        break; //quebrando a função/instrução break
      }
    }
    if (jaCadastrado == 1) {
      printf("Número já cadastrado!!\n");
    } else {
      vetor[i] = numero;
      printf("Número %d: %d\n", (i+1), vetor[i]);
    }
  }

  //localizar e exibir o menor valor
  menorValor = vetor[0];
  for (i = 1; i < N; i++) {
    if (vetor[i] < menorValor) {
      menorValor = vetor[i];
    }
  }
  printf("Menor valor da estrutura: %d\n", menorValor);

  //localizar e exibir o maior valor
  return 1;
}
