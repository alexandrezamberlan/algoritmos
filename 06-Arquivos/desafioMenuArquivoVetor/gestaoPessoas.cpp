#include <iostream>
#include <string>
#define TAM 1000

using namespace std;

typedef struct {
    string nome;
    string email;
} Pessoa;

#include "meusMetodos.h"

int main() {
    Pessoa vetor[TAM];
    int qtd_pessoas;
    string baseDados = "base.csv";

    qtd_pessoas = conectarBase(baseDados, vetor, TAM);
    menu(vetor, TAM, qtd_pessoas);
    
    return 1;
}