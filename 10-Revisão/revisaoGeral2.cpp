#include <iostream>
#include <string>
using namespace std;

typedef struct {
    int matricula;
    string nome;
} Pessoa;


void exibePessoa(Pessoa p) { //exibição não tem alteração, então se passa uma cópia
    cout << p.matricula << endl;
    cout << p.nome << endl;
}

void atualizaNome(Pessoa *p, string nomeAtualizado) { //ha alteração, então se passa uma referência
    p->nome = nomeAtualizado;
}

int main() {
    Pessoa umaPessoa;

    umaPessoa.nome = "Itamar";
    umaPessoa.matricula = 1001;

    atualizaNome(&umaPessoa,"Itamar Junior"); //passagem de parametro por referencia (endereço)
    exibePessoa(umaPessoa); //passagem de parametro por valor (copia)

    cout << umaPessoa.nome << endl;

    return 1;
}