#include <iostream>
#include <string>

using namespace std;

typedef struct {
    string nome;
    int matricula;
} Aluno;

//métodos com retorno, ou funções, ao finalizar suas operações, um valor é devolvido ao processo que o chamou

//métodos sem retorno, ou procedimentos, ao finalizar suas operações NADA é devolvido ao processo que o chamou


void popular(Aluno vetor[], int n){

}

void exibir(Aluno vetor[], int n) {
    
}

int main() {

    Aluno turma[20]; //vetor turma tem para cada posicao um elemento do tipo Aluno

    popular(turma, 20);
    exibir(turma, 20);
    
    return 1;
}