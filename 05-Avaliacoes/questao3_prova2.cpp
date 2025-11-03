// Questão 3) Dado um arquivo texto chamado de nomes.txt, criar um programa que leia o arquivo e armazene esses nomes numa lista de nomes do tipo string. Ao final, exibir a lista populada com a quantidade de nomes lidos do arquivo. Exemplo de arquivo nomes.txt Anderson Dick Guilherme Londero João Messias Alexandre Zamberlan Anderson Dick Guilherme Londero

#include <iostream>
#include <string>
#include <fstream>
#define TAM 1000
using namespace std;

bool existeArquivo(string nomeArquivo) {
    ifstream procuradorArquivo; //tipo de arquivo para leitura
    procuradorArquivo.open(nomeArquivo); 
    
    if (procuradorArquivo) { //caso arquivo exista
        procuradorArquivo.close();
        return true;
    } 
    return false; //caso arquivo nao exista
}

string paraMaiusculo(string frase) {
    for (int i = 0; i < frase.size(); i++) {
        frase[i] = toupper(frase[i]);
    }
    return frase;
}

int popularVetorDoArquivo(string vetor[], int n, string nomeArquivo) {
    //testar se o arquivo existe
	if (!existeArquivo(nomeArquivo)) {
		cout << "Programa vai encerrar, pois arquivo fonte nao localizado....\n";
		exit(0);
	}

    //abrir arquivo para escrita
	ifstream procuradorArquivo; //tipo de arquivo para leitura
    procuradorArquivo.open(nomeArquivo); 
 
	//le o arquivo capturando as frases
	string linha;
    int qtdNomes = 0;
	while (!procuradorArquivo.eof()) {
		getline(procuradorArquivo, linha); //lendo a linha inteira
		linha = paraMaiusculo(linha);
		vetor[qtdNomes] = linha;
        qtdNomes++;
        if (qtdNomes == TAM) {
            break;
        }
		
	}

	procuradorArquivo.close();
    return qtdNomes;
}

void exibirVetorNomes(string vetor[], int n){
     for (int i = 0; i < n; i++) {
        cout << "Nome: " << vetor[i] << endl;
    }
    cout << "Total de nomes: " << n << endl;

}

int main() {
    string vetorNomes[TAM];

    //solicita pro usuario nome do arquivo origem
    string nomeArquivo = "nomes.txt";

    int qtdNomes = popularVetorDoArquivo(vetorNomes, TAM, nomeArquivo);

	exibirVetorNomes(vetorNomes, qtdNomes);
	
    return 1;
}
