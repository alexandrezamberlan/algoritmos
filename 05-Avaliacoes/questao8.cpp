#include <iostream>
#include <string>
#define TAM 5

using namespace std;

typedef struct {
    string nome;
    int matricula;
} Aluno;

void lerDadosAlunos(Aluno vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nome: ";
        getline(cin, vetor[i].nome);

        cout << "Matricula: ";
        cin >>vetor[i].matricula;
    }
}

void exibirDadosAlunos(Aluno vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nome: " << vetor[i].nome << ". Matricula: " << vetor[i].matricula << endl;
    }
}

int qualPosicao(int matricula, Aluno vetor[], int n) {
    for (int i = 0; i < n; i++) {
        if (matricula == vetor[i].matricula) {
            return i;
        }
    }
    //se sai do for, pq olhei todos os alunos e nao bateu a matricula de busca, logo
    return -1;
}

int main() {

    Aluno vetor[TAM]; //vetor turma tem para cada posicao um elemento do tipo Aluno

    lerDadosAlunos(vetor, TAM);
    exibirDadosAlunos(vetor, TAM);

    int matriculaPesquisa;
    cout << "Digite uma matricula de pesquisa: ";
    cin >> matriculaPesquisa;

    int posicaoLocalizada = qualPosicao(matriculaPesquisa, vetor, TAM);
    cout << "O usuario dessa matricula esta na posicao ... " << posicaoLocalizada << endl;
    
    return 1;
}