#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

void split(string vetor[], string str, string deli = " ") {        
    int start = 0;
    int end = str.find(deli);
    int i = 0;
    while (end != -1) {
        vetor[i] = str.substr(start, end - start);
        i++;
        start = end + deli.size();
        end = str.find(deli, start);
    }
    vetor[i] = str.substr(start, end - start);
}


int conectarBase(string baseDados, Pessoa vetor[], int tamanho) {
    int qtd_pessoas = 0;
    ifstream procuradorArquivo; //tipo de arquivo para leitura
    procuradorArquivo.open(baseDados); 

    if (!procuradorArquivo) {
        cout << "Arquivo da base de dados não localizado. Programa encerrado." << endl;
        exit(0);
    } 
    if (qtd_pessoas == tamanho) {
        cout << "Vetor lotado. Programa encerrado." << endl;
        exit(0);
    }

    //le o arquivo capturando as pessoas linha a linha
	string linha;
    string vetorLinha[2];
	while (!procuradorArquivo.eof()) {
		getline(procuradorArquivo, linha); //lendo a linha inteira
        //linha = Alexandre Zamberlan,alexz@ufn.edu.br
        split(vetorLinha, linha, ",");
        //vetorLinha[0] = "Alexandre Zamberlan"
        //vetorLinha[1] = "alexz@ufn.edu.br"
        vetor[qtd_pessoas].nome = vetorLinha[0];
        vetor[qtd_pessoas].email = vetorLinha[1];
        qtd_pessoas += 1;
	}
	procuradorArquivo.close();
    cout << "Quantidade " << qtd_pessoas << endl;
    return qtd_pessoas;
}