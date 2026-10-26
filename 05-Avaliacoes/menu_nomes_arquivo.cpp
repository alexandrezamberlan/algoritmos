#include <algorithm>
#include <fstream>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

bool inserir(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome: ";
    getline(cin, nome);

    if (nome.empty()) {
        cout << "O nome nao pode ser vazio.\n";
        return false;
    }

    bool encontrado = false;
    for (int i = 0; i < nomes.size(); i++) {
        if (nome == nomes[i]) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        cout << "Nome ja cadastrado na estrutura.\n";
        return false;
    } else {
        nomes.push_back(nome);
        cout << "Nome inserido com sucesso.\n";
        return true;
    } 
}

void listar(vector<string> nomes) {
    if (nomes.empty()) {
        cout << "Nenhum nome cadastrado.\n";
        return;
    }

    cout << "\nNomes cadastrados:\n";
    for (int i = 0; i < nomes.size(); i++) {
        if (!nomes[i].empty()) {
            cout << i + 1 << " - " << nomes[i] << "\n";
        }
    }
}

void pesquisar(vector<string> nomes) {
    string nome;

    cout << "Digite o nome que deseja pesquisar: ";
    getline(cin, nome);

    // vector<string>::const_iterator encontrado =
    //     find(nomes.begin(), nomes.end(), nome);

    // if (encontrado != nomes.end()) {
    //     cout << "Nome encontrado.\n";
    // } else {
    //     cout << "Nome nao encontrado.\n";
    // }

    bool encontrado = false;
    for (int i = 0; i < nomes.size(); i++) {
        if (nome == nomes[i]) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        cout << "Nome encontrado.\n";
    } else {
        cout << "Nome nao encontrado.\n";
    }
}

bool remover(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome que deseja remover: ";
    getline(cin, nome);

    vector<string>::iterator encontrado =
        find(nomes.begin(), nomes.end(), nome);

    if (encontrado != nomes.end()) {
        nomes.erase(encontrado);
        cout << "Nome removido com sucesso.\n";
        return true;
    } else {
        cout << "Nome nao encontrado.\n";
        return false;
    }
}

void carregarBase(string nomeBase, vector<string>& nomes) {
    ifstream arquivo;
    arquivo.open(nomeBase);

    if (!arquivo) {
        return;
    } 
 
	//le o arquivo capturando as frases
	string linha;
	while (!arquivo.eof()) {
		getline(arquivo,linha); //lendo a linha inteira
		nomes.push_back(linha);
	}
    arquivo.close();
}

void atualizarBase(vector<string> nomes, string nomeBase) {
    ofstream arquivo;
    arquivo.open(nomeBase);

    for (int i = 0; i < nomes.size(); i++) {
        arquivo << nomes[i] << endl;
    }

    arquivo.close();
}

void ordenar(vector<string>& nomes) {
    //usando o bubble sort ou bolha
    string tmp;
    bool houveTroca;
    do {
        houveTroca = false;
        for (int i = 0; i < nomes.size()-1; i++) {
            if (nomes[i] > nomes[i+1]) {
                houveTroca = true;
                tmp = nomes[i];
                nomes[i] = nomes[i+1];
                nomes[i+1] = tmp;
            }
        }
    } while (houveTroca);
}

int main() {
    vector<string> nomes;
    int opcao;
    string nomeBase = "nomes.txt";

    //carregar a base de dados para a estrutura nomes
    carregarBase(nomeBase, nomes);

    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Inserir nome\n";
        cout << "2 - Listar nomes\n";
        cout << "3 - Pesquisar nome\n";
        cout << "4 - Remover nome\n";
        cout << "5 - Sair\n";
        cout << "Escolha uma opcao: ";
        if (!(cin >> opcao)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Digite um numero entre 1 e 5.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcao) {
            case 1:
                if (inserir(nomes)) {
                    //ordenar o vetor
                    ordenar(nomes);
                    //atualizar base de dados
                    atualizarBase(nomes, nomeBase);
                }
                break;
            case 2:
                listar(nomes);
                break;
            case 3:
                pesquisar(nomes);
                break;
            case 4:
                if (remover(nomes)) {
                    //atualizar base de dados
                    atualizarBase(nomes, nomeBase);
                }
                break;
            case 5:
                cout << "Programa encerrado.\n";
                break;
            default:
                cout << "Opcao invalida.\n";
        }
    } while (opcao != 5);

    return 0;
}
