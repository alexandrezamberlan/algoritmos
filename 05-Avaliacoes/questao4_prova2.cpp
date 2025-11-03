// Questão 4) Complemento da questão 3. Agora, construir um método que localize e exiba os nomes replicados.

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

void exibirNomesReplicados(string vetor[], int n) {
    string vetorCopia[TAM];
    //fazer uma copia
    for (int i = 0; i < n; i++) {
        vetorCopia[i] = vetor[i];
    }

    string palavraAnalisada;
    int contador;

    for (int i = 0; i < n; i++) {
        if (vetorCopia[i] == "#") { //# indica que a palavra ja foi analisada
            continue;
        } else {
            palavraAnalisada = vetorCopia[i];
            contador = 0;
            for (int j = 0; j < n; j++) {
                if (vetorCopia[j] != "#" && palavraAnalisada == vetorCopia[j]) {
                    contador++;
                    vetorCopia[j] = "#";
                }
            }
            if (contador > 1) {
                cout << "Palavra replicada: " << palavraAnalisada << endl;
            }
        }
    }
}

int main() {
    string vetorNomes[TAM];

    //solicita pro usuario nome do arquivo origem
    string nomeArquivo = "nomes.txt";

    int qtdNomes = popularVetorDoArquivo(vetorNomes, TAM, nomeArquivo);

	exibirVetorNomes(vetorNomes, qtdNomes);

    exibirNomesReplicados(vetorNomes, qtdNomes);

    return 1;
}
