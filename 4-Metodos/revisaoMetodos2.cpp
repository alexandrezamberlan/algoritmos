#include <iostream>
using namespace std;

int main() {
  int vetor[] = {10,20,30,40,50,60};
  cout << "Tamanho do vetor: " << (int)sizeof(vetor)/sizeof(vetor[0]) << endl;
  return 0;
}
