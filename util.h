#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <iostream>
#include <string>
#include <cstring>

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

void paraMaiusculoVetorChar(char frase[]) { //para C
    int i;
    for (i = 0; i < strlen(frase); i++) {
        frase[i] = toupper(frase[i]); 
    }
}

void paraMaiusculoStringSemRetorno(string *frase) { //para C++ com passagem de parametro por referencia explicita
    int i;
    for (i = 0; i < (*frase).length(); i++) {
        (*frase)[i] = toupper((*frase)[i]);
    }    
}

string paraMaiusculoStringComRetorno(string frase) { //para C++ como passagem de parametro por valor
    int i;
    for (i = 0; i < frase.length(); i++) {
        frase[i] = toupper(frase[i]);
    }
    return frase;
}

struct tm pegaDataHora() {
    time_t t = time(NULL);
    return *localtime(&t);
}


