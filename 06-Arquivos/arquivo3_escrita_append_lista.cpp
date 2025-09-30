#include <iostream>
#include <fstream>
#include <string>
#define TAM 1000
using namespace std; 

#include "../00-Utilidades/meusMetodos.h"

int main() {
	string listaNomes[TAM];
	string nomeBaseDados = "base.dat";
    //ao iniciar, conectar com a base e atualizar a lista de nomes
	int quantidadeNomes = conectarBase(listaNomes, nomeBaseDados, TAM);

	//listar os nomes ja cadastrados
	if (quantidadeNomes > 0) {
		exibirListaNomes(listaNomes, quantidadeNomes);
	} 	
	
    //abrir arquivo para escrita
	ofstream procuradorArquivo; 
    //arquivo sendo aberto para append ou inserir no final
    procuradorArquivo.open(nomeBaseDados, ios::out | ios::app);
 
	string nome;
	while (true) {
		cout << "Digite um nome para guardar no arquivo ou fim para encerrar: ";
		getline(cin,nome);
		fflush(stdin);
		nome = paraMaiusculo(nome);
		if (nome == "FIM"){
			break;
		}

		bool conseguiuInserir = inserirLista(nome, listaNomes, &quantidadeNomes, TAM);

		if (conseguiuInserir){
			//sem ordenacao... momento de persistir o nome na base de dados
			procuradorArquivo << "\n" << nome;
			procuradorArquivo.flush();
		} else {
			cout << "Nome ja cadastrado...." << endl;
		}
	}
	procuradorArquivo.close();
    return 1;
}