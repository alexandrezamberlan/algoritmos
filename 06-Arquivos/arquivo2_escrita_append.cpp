#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

#include "../00-Utilidades/meusMetodos.h"

int main() {
    //solicita pro usuario nome do arquivo origem
    string nomeArquivo;
	cout << "Informe nome do arquivo que recebera os nomes: ";
	cin >> nomeArquivo;
	fflush(stdin);
	
    //abrir arquivo para escrita
	ofstream procuradorArquivo; 
    //arquivo sendo aberto para append ou inserir no final
    procuradorArquivo.open(nomeArquivo, ios::out | ios::app);
 
	string nome;
	while (true) {
		cout << "Digite um nome para guardar no arquivo ou fim para encerrar: ";
		getline(cin,nome);
		fflush(stdin);

		nome = paraMaiusculo(nome);
		if (nome == "FIM"){
			break;
		}
		procuradorArquivo << nome << endl;
	}
	procuradorArquivo.close();
    return 1;
}