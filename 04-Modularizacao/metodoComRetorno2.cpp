#include <iostream>
#include <string>

using namespace std;

string converteRomanos(int numero) {
    switch (numero)
    {
    case 1:
        return "I";
     case 2:
        return "II";
     case 3:
        return "III";
     case 4:
        return "IV";
     case 5:
        return "V";
     case 6:
        return "VI";
     case 7:
        return "VII";
     case 8:
        return "VIII";
     case 9:
        return "IX";
     case 10:
        return "X";
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

    cout << "Numero convertido em romanos: " << converteRomanos(numero) << endl;

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