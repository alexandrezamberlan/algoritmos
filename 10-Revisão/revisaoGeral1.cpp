#include <iostream>
#include "../util.h"
using namespace std;

int main() {
    string frase = "gabriel castagna";
    string frase2 = "alexandre@gremio@computacao@professor@estruturas de dados";
    char outraFrase[100];

    strcpy(outraFrase,"gabriel baggio");
    paraMaiusculoVetorChar(outraFrase);
    cout << outraFrase << endl;

    paraMaiusculoStringSemRetorno(&frase);
    cout << frase << endl;

    frase2 = paraMaiusculoStringComRetorno(frase2);
    cout << frase2 << endl;

    string *vetorPalavras;
    vetorPalavras = split(frase2,"@");

    for (int i = 0; i < vetorPalavras->size(); i++) {
        cout << vetorPalavras[i] << endl;
    }

    struct tm minhaDataHora = pegaDataHora();

    cout << minhaDataHora.tm_mday << "/" << minhaDataHora.tm_mon + 1 << "/" << minhaDataHora.tm_year + 1900 << endl;
    cout << minhaDataHora.tm_hour << ":" << minhaDataHora.tm_min << endl;
}