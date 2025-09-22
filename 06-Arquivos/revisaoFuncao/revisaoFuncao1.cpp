//Criar um programa que tenha uma função que receba uma frase e retorne a quantidade de vogais;

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

using namespace std;

#include "utils\meusMetodos.h"

int main() {
    //receber frase em uma string
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    //receber a quantidade de vogais na frase
    int quantidade_vogais = contarVogais(frase);

    //exibir a quantidade de vogais na frase
    cout << "A frase tem " << quantidade_vogais << " vogais\n";

    return 1;    
}