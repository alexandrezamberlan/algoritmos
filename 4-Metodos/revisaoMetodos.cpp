#include <iostream> 
#include <string>
using namespace std;

void mostrarVogais(string frase);
int contarVogais(string frase);
void mostrarVogaisUnicas(string frase);
int contarVogaisUnicas(string frase);


int main() {
    string frase;
    system("clear"); //método sem retorno com um parâmetro do tipo string //windows - system("cls");
    cout << "Digite uma frase: ";
    getline(cin, frase); //método sem retorno com 2 parâmetros: 1o ponteiro do teclado; 2o é uma string

    cout << "Tamanho da frase: " << frase.length() << endl; //método com retorno (int) e sem parâmetros
    
    mostrarVogais(frase); //método não nativo e sem retorno
    cout << "Total de vogais: " << contarVogais(frase) << endl; //método não nativo com retorno

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
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            cout << frase[i] << endl;
        }
    }
}

int contarVogaisUnicas(string frase) {
    
    int quantidadeVogais = 0;
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            quantidadeVogais++;
        }
    }
    return quantidadeVogais;
}