#include <iostream> 
#include <string>
using namespace std;

void mostrarASCII(char letra) {
    cout << letra << " - " << (int)letra << endl;
}

int trazerASCII(char letra) {
    return (int)letra;
}

int main() {
    char letra;
    do {
        cout << "Pressione uma tecla para descobrir seu equivalente ASCII (ou CTRL + C para cancelar): ";
        cin >> letra;
        //mostrarASCII(letra); //método sem retorno e 1 parâmetro
        cout << trazerASCII(letra) << endl;
    } while (1);
    return 1;
}