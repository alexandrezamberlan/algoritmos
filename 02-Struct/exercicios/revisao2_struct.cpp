//struct é um recurso para que programadores possam criar tipos artificiais

#include <iostream>
#include <string>
using namespace std;

#include "meusIncludes.h"

int main() {
    Glicemia medicaoAlexandre;
    medicaoAlexandre.valorGlicemia = 133;
    medicaoAlexandre.data = "11/08/2025";
    medicaoAlexandre.hora = "19:02";


    Glicemia ano2025[365];
    ano2025[0].valorGlicemia = 98;
    ano2025[0].data = "11/07/2025";
    ano2025[0].hora = "12:34";

    cout << "ola luiz\n";




    return 1;
}






