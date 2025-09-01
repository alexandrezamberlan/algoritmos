#include <iostream>
#include <string>

using namespace std;

#include "metodos.h"

int main() {
   string data; 
   
   do {
      cout << "Digite data [dd/mm/aaaa] entre 1980 e 2025: ";
      cin >> data;

      if (data.size() != 10 || data[2] != '/' || data[5] != '/') {
         cout << "Data com formato invalido..." << endl;
      }
   } while (data.size() != 10);

   escreverSeValida2(data);

   return 1;
}