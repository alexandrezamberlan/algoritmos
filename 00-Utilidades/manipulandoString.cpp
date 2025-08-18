#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string horaE = "19:36";
    string hora = horaE.substr(0,2);
    string minutos = horaE.substr(3,2);
    cout << hora << endl;
    cout << minutos << endl;


    string data = "11/08/2025";
    string dia = data.substr(0,2);
    string mes = data.substr(3,2);
    string ano = data.substr(6,4);

    int tempoPermanencia = stoi(hora) * 60 + stoi(minutos);
    cout << "Permanencia: " << tempoPermanencia << endl;


    string umaFrase = "turma de algoritmos em sistemas de informacao";
    cout << umaFrase.find("algo") << endl;

    return 0;
}


