#include <iostream>
#include <string>

using namespace std;

#include "metodos.h"

int main() {
   string data; 
   
   do {
      cout << "Digite data [dd/mm/aaaa] entre 1980 e 2025: ";
      cin >> data;
      if (verificarDataValida(data)) {
         break;
      } else {
         cout << "Data invalida..." << endl;
      }
   } while (true);
   cout << "Data valida..." << endl;

   return 1;
}