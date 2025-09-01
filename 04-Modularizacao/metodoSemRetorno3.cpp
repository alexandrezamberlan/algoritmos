#include <iostream>
#include <string>

using namespace std;

#include "metodos.h"

int main() {
   int dia, mes, ano;
   do {
      cout << "Informe dia: ";
      cin >> dia;
      if (dia < 1 || dia > 31) {
         cout << "Dia fora da faixa permitida... " << endl;
      }
   } while (dia < 1 || dia > 31);

   do {
      cout << "Informe mes: ";
      cin >> mes;
      if (mes < 1 || mes > 12) {
         cout << "Mes fora da faixa permitida... " << endl;
      }
   } while (mes < 1 || mes > 12);

   do {
      cout << "Informe ano [1980 a 2025]: ";
      cin >> ano;
      if (ano < 1980 || ano > 2025) {
         cout << "Ano fora da faixa permitida... " << endl;
      }
   } while (ano < 1980 || ano > 2025);

   escreverSeValida(dia, mes, ano);    

   return 1;
}