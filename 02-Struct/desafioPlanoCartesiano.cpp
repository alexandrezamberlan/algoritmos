#include <iostream>
#include <ctime>
#define TAM 1000
#define TAMLIMITE 10
using namespace std;

typedef struct {
    int x;
    int y;
} Ponto;

int main() {
    Ponto vetor[TAM];
    srand(time(NULL));

    //rotina para sortear pontos no plano cartesiano, de -6 a 6
    for (int i = 0; i < TAM; i++) {
        vetor[i].x = TAMLIMITE - rand() % (TAMLIMITE * 2 + 1);
        vetor[i].y = TAMLIMITE - rand() % (TAMLIMITE * 2 + 1);
    }

    //rotina para exibir os pontos
    string quadrante;
    for (int i = 0; i < TAM; i++) {       
        //rotina para exibir o quadrante
        if (vetor[i].x > 0 && vetor[i].y > 0) {
            quadrante = "1º Quadrante";
        } else if (vetor[i].x < 0 && vetor[i].y > 0) {
            quadrante = "2º Quadrante";
        } else if (vetor[i].x < 0 && vetor[i].y < 0) {
            quadrante = "3º Quadrante";
        } else if (vetor[i].x > 0 && vetor[i].y < 0) {
            quadrante = "4º Quadrante";
        } else if (vetor[i].x == 0 && vetor[i].y != 0) {
            quadrante = "Eixo Y";
        } else if (vetor[i].x != 0 && vetor[i].y == 0) {
            quadrante = "Eixo X";
        } else {
            quadrante = "Origem";
        }

        cout << "Ponto: " << vetor[i].x << "," << vetor[i].y << "\t" << quadrante << endl;
    }
    return 1;
}