#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string *split(string frase, string delimitador = " ")
{
    string *vetor = (string *)malloc(sizeof(string) * 3); //alocando um vetor de string com 3 posições
    int inicio = 0;
    int fim = frase.find(delimitador);
    int i = 0;
    while (fim != -1) {
        vetor[i] = frase.substr(inicio, fim - inicio);
        inicio = fim + delimitador.size();
        fim = frase.find(delimitador, inicio);
        i++;
    }
    vetor[i] = frase.substr(inicio, fim - inicio);

    return vetor;
}

