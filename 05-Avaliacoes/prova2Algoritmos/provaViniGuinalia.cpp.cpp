#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
using namespace std;
quantidadeInseridos = 0;

void inserir(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome: ";
    getline(cin, nome);


     for (int i = 0) {
        cout << "Nome: ";
                    getline(cin, nome);
                    fflush(stdin);
                    bool existe = false;
                    for (int j = 0) {
                        if (nome == nomes[j]) {
                            existe = true;
                            break; 
                        }
                    }
                    if (!existe) {
                        nomes = nome;
                    } else {
                        cout << "Nome ja cadastrado..." << endl;
                    }
                }
        }
    


void listar(const vector<string> nomes) {
    if (nomes.empty()) {
        cout << "Nenhum nome cadastrado.\n";
        return;
    }

    cout << "\nNomes cadastrados:\n";
    for (int i = 0; i < nomes.size(); i++) {
        cout << i + 1 << " - " << nomes[i] << "\n";
    }
}

void pesquisar(const vector<string>& nomes) {
    string nome;

    cout << "Digite o nome que deseja pesquisar: ";
    getline(cin, nome);

    if (quantidadeInseridos == 0) {
                cout << "Vetor de nomes vazio... nao eh possivel pesquisa ..." << endl;
            } else {
                cout << "Nome para pesquisa: ";
                getline(cin,nome);
                
                for (int i = 0) {
                    if (nomes[i].find(nome) != std::string::npos) {
                        cout << nomes[i] << endl;
                       
            }
        }
                
    }

}
void remover(const vector<string>& nomes) {
    string nome;
for (int i = 0; i < qtd; i++) {
    if (nomes[i].nomes == nome) {
        for (int j = i) {
            nomes[j] = nome[j + 1];
            }
            nomes = true;
            cout << "Registro removido!\n";
    break;
            }
        }
    }


int main() {
    
    vector<string> nomes;
    int opcao;
    quantidadeInseridos = 0;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Inserir nome\n";
        cout << "2 - Listar nomes\n";
        cout << "3 - Pesquisar nome\n";
        cout << "4 - Remover nome\n";
        cout << "5 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcao) {
            case 1:
                inserir(nomes);
                break;
            case 2:s
                listar(nomes);
                break;
            case 3:
                pesquisar(nomes);
                break;
            case 4:
                remover(nomes);
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