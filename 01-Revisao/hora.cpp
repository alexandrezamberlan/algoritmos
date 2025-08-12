#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    time_t agora = time(nullptr);
    tm* agora_local = localtime(&agora);

    string hora = to_string(agora_local->tm_hour);
    string minutos = to_string(agora_local->tm_min); 

    cout << "Hora: " << hora << ":" << minutos << endl;
    return 0;
}
