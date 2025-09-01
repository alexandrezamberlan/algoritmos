#include <iostream>
#include <string>

using namespace std;

void converteRomanos(int numero) {
    cout << "Convertido para romanos: ";

    switch (numero)
    {
    case 1:
        cout << "I" << endl;
        break;
     case 2:
        cout << "II" << endl;
        break;
     case 3:
        cout << "III" << endl;
        break;
     case 4:
        cout << "IV" << endl;
        break;
     case 5:
        cout << "V" << endl;
        break;
     case 6:
        cout << "VI" << endl;
        break;
     case 7:
        cout << "VII" << endl;
        break;
     case 8:
        cout << "VIII" << endl;
        break;
     case 9:
        cout << "IX" << endl;
        break;
     case 10:
        cout << "X" << endl;
        break;
    
    default:
        break;
    }
}

int main() {
    int numero;
    do {
        cout << "Informe um número entre 1 e 10: ";
        cin >> numero;
        if (numero < 1 || numero > 10) {
            cout << "Numero fora da faixa permitida... " << endl;
        }
    } while (numero < 1 || numero > 10);

    converteRomanos(numero);

    // while (true) {
    //     cout << "Informe um número entre 1 e 10: ";
    //     cin >> numero;
    //     if (numero < 1 || numero > 10) {
    //         cout << "Numero fora da faixa permitida... " << endl;
    //     } else {
    //         break;
    //     }
    // } 

    return 1;
}