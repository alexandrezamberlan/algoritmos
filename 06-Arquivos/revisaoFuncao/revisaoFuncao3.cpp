// - Criar um programa que tenha duas funções:
//     - função que receba uma frase e a retorne em maiúsculo
//     - função que receba uma frase e retorne a quantidade de palavras
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

    string fraseEmMaisculo = paraMaiusculo(frase);
    cout << "Frase em maiusculo: " << fraseEmMaisculo << endl;

    int totalPalavras = contarPalavras(frase);
    cout << "Total de palavras na frase: " << totalPalavras << endl;

    return 1;    
}