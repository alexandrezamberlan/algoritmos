#include <iostream>
using namespace std;

float fatorial(int numero) {
    float resposta = numero;

    if (numero >= 0 && numero <= 1) return 1;

    for (int i = numero-1; i > 1; i--) {
        resposta = resposta * i;
    }
    return resposta;
}

int main() {
    int numero;

    system("clear");
    cout << "Informe um número para calcular o seu fatorial: ";
    cin >> numero;
    cout << "Fatorial é: " << fatorial(numero) << endl;

    return 1;
}