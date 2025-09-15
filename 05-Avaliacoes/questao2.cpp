#include <iostream>
#include <string>

using namespace std;

typedef struct {
    string nome;
    int matricula;
} Aluno;

int main() {

    Aluno turma[20]; //vetor turma tem para cada posicao um elemento do tipo Aluno

    turma[0].nome = "Maria";
    turma[0].matricula = 123;
    
    return 1;
}