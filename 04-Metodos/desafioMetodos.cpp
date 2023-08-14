#include <iostream>
#include <string>

using namespace std;

int validarEmail(string email);

int main() {
    string email;
    cout << "Informe seu email: ";
    cin >> email;
    if (validarEmail(email) == 1) {
        cout << "Seu email é válido!!" << endl;
    } else {
        cout << "Seu email é inválido!!" << endl;
    }
    return 1;
}

int validarEmail(string email) {

}

//expressão regular - REGEX -> regular expression

//buscar validar pelo erro e não pelo acerto
//analisar a presença de mais de um arroba ou a sua ausencia
//analisar a presença de caracteres especiais - "/]
//texto@texto.texto
