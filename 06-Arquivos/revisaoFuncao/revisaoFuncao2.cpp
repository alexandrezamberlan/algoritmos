//Criar um programa que tenha uma função que receba uma frase e retorne a quantidade de vogais;
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <sstream>

using namespace std;

#include "utils\meusMetodos.h"

int main() {
    //receber frase em uma string e uma letra em um char
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    char letra;
    cout << "Digite a letra de pesquisa: ";
    cin >> letra;

    //receber a frase com o caracter de pesquisa substituido pelo @
    string fraseResultado = trocarCaracter(frase, letra);

    //exibir a frase alterada
    cout << "Frase alterada: " << fraseResultado << endl;

    return 1;    
}