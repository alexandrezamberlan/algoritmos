#include <iostream> 
#include <string>
using namespace std;

void mostrarVogais(string frase);
int contarVogais(string frase);
void mostrarVogaisUnicas(string frase);
int contarVogaisUnicas(string frase);
void inicializarVetor(int *vetor, int n); //void inicializarVetor(int vetor[]);


int main() {
    string frase;
    system("clear"); //método sem retorno com um parâmetro do tipo string //windows - system("cls");
    cout << "Digite uma frase: ";
    getline(cin, frase); //método sem retorno com 2 parâmetros: 1o ponteiro do teclado; 2o é uma string

    cout << "Tamanho da frase: " << frase.length() << endl; //método com retorno (int) e sem parâmetros
    
    //mostrarVogaisUnicas(frase); //método não nativo e sem retorno
    cout << "Total de vogais: " << contarVogaisUnicas(frase) << endl; //método não nativo com retorno

    cout << "a - " << (int)'a' << endl;
    cout << "e - " << (int)'e' << endl;
    cout << "i - " << (int)'i' << endl;
    cout << "o - " << (int)'o' << endl;
    cout << "u - " << (int)'u' << endl;

    return 1;
}

void mostrarVogais(string frase) {
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            cout << frase[i] << endl;
        }
    }
}

int contarVogais(string frase) {
    int quantidadeVogais = 0;
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            quantidadeVogais++;
        }
    }
    return quantidadeVogais;
}

void mostrarVogaisUnicas(string frase) {
    int vogais[118]; 
    inicializarVetor(vogais, 118);

    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            if (vogais[(int)frase[i]] == 0) {
                vogais[(int)frase[i]] = 1;
                cout << frase[i] << endl;
            }
        }
    }
}

int contarVogaisUnicas(string frase) {
    int vogais[118]; 
    inicializarVetor(vogais, 118);

    int quantidadeVogais = 0;
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            if (vogais[(int)frase[i]] == 0) {
                vogais[(int)frase[i]] = 1;
                quantidadeVogais++;
            }
        }
    }
    return quantidadeVogais;
}

void inicializarVetor(int *vetor, int n) { //void inicializarVetor(int vetor[]) {
    for (int i = 0; i < n; i++) {
        vetor[i] = 0;
    }
}