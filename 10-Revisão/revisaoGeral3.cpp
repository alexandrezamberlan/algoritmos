#include <iostream>
#include "../util.h"

using namespace std;

typedef struct {
    int matricula;
    string nome;
} Pessoa;

void popularVetor(Pessoa vetor[], int n) {
    string nome;
    for (int i = 0; i < n; i++) {
        cout << "Matricula: ";
        cin >> vetor[i].matricula;
        cout << "Nome: ";
        cin >> nome;
        nome = paraMaiusculoStringComRetorno(nome);
        vetor[i].nome = nome;
    }
}

void exibirVetor(Pessoa vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << vetor[i].nome << endl;
    }
}

void ordenarVetor(Pessoa vetor[], int n) {
    //metodo da bolha e ordenando por matricula
    bool houveTroca;
    Pessoa tmp;
    int i;
    do {
        houveTroca = false;
        for (i = 0; i < n - 1; i++) {
            if (vetor[i].matricula > vetor[i+1].matricula) {
                tmp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = tmp;
                houveTroca = true;
            }
        }
    } while (houveTroca);
}

int main() {
    int qtd;
    cout << "Quantas pessoas quer cadastrar? ";
    cin >> qtd;
    //alocação dinamica == em tempo de execução
    Pessoa *vetor;
    vetor = (Pessoa *)malloc(sizeof(Pessoa) * qtd);
    popularVetor(vetor, qtd);
    ordenarVetor(vetor, qtd);
    exibirVetor(vetor, qtd);
    return 1;
}
