// Questão 1) Construir um programa em que o usuário insira/digite 10 nomes completos de pessoas (validar se o nome lido tem duas palavras no mínimo). Esses nomes devem ser transformados para maiúsculo e armazenados em um vetor de tamanho 10 (ou TAM 10). Ao final, esses nomes devem ser exibidos. Contudo, o programa deve ser composto por métodos (com ou sem retorno).

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#define TAM 10

using namespace std;

int contarPalavras(string& frase) {
    istringstream stream(frase);
    string palavra;
    int contagem = 0;
    
    // Enquanto houver palavras na frase
    while (stream >> palavra) {
        // cout << palavra << endl;
        contagem++;
    }
    
    return contagem;
}

string paraMaiusculo(string frase) {
    for (int i = 0; i < frase.size(); i++) {
        frase[i] = toupper(frase[i]);
    }
    return frase;
}

void popularVetor(string vetor[], int n) {
    string nomeCompleto;

    for (int i = 0; i < n; i++) {
        do {
            cout << "Nome completo: ";
            getline(cin, nomeCompleto);
            if (contarPalavras(nomeCompleto) > 1) {
                break;
            } else {
                cout << "Digite um nome completo, ou seja, com 2 palavras\n";
            }
        } while (true);
        nomeCompleto = paraMaiusculo(nomeCompleto);
        vetor[i] = nomeCompleto;
    }
}

void exibirVetor(string vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nome: " << vetor[i] << endl;
    }
}


int main() {
    string vetor[TAM];

    popularVetor(vetor, TAM);
    exibirVetor(vetor, TAM);

    return 1;
}