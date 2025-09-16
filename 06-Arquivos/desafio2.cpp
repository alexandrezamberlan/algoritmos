/*
2) Construa um programa (com módulo/método) que leia n nomes completos de pessoas e os adicione em um vetor de n posicoes em que deve ser armazenado o nome completo e o sobrenome. Use a seguinte estrutura;

typedef struct {
    string nomeCompleto;
    string sobreNome;
} Pessoa;

Dica: será preciso fazer uma função que extraia o sobrenome de um nome completo.
*/

#include <iostream>
#include <string>
#define N 5

using namespace std;

typedef struct {
    string nomeCompleto;
    string sobreNome;
} Pessoa;

string extrairSobreNome(string nome) {
    string sobreNome;
    // Extrai o sobrenome
    size_t pos = nome.find_last_of(' ');
    if (pos != string::npos) {
        sobreNome = nome.substr(pos + 1);
    } else {
        sobreNome = nome;
    }
    return sobreNome;
}

void lerNomes(Pessoa vetor[], int n) {
    string nomeCompleto;
    string sobreNome;
    for (int i = 0; i < n; i++) {
        cout << "Nome: ";
        getline(cin, nomeCompleto);
        
        sobreNome = extrairSobreNome(nomeCompleto); //chamada da funcao que descobre sobrenome

        vetor[i].nomeCompleto = nomeCompleto;
        vetor[i].sobreNome = sobreNome;
    }
}

void exibirNomes(Pessoa vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nome completo: " << vetor[i].nomeCompleto << ". Sobrenome: " << vetor[i].sobreNome << endl;
    }
}

int main() {
    Pessoa pessoas[N];

    lerNomes(pessoas, N);

    exibirNomes(pessoas, N);

    return 1;
}
