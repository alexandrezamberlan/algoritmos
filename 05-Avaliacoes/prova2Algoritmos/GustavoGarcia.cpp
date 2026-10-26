#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

void inserir(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome: ";
    getline(cin, nome);

    nomes.push_back(nome);
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

    auto it = find(nomes.begin(), nomes.end(), nome);
    if (it != nomes.end()) {
        cout << "Nome encontrado na posição: " << distance(nomes.begin(), it) + 1 << "\n";
    } else {
        cout << "Nome não encontrado.\n";
    }
}

void remover(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome que deseja remover: ";
    getline(cin, nome);

    auto it = find(nomes.begin(), nomes.end(), nome);
    if (it != nomes.end()) {
        nomes.erase(it);
        cout << "Nome removido com sucesso.\n";
    } else {
        cout << "Nome não encontrado.\n";
    }
}

int main() {
    vector<string> nomes;
    int opcao;

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
            case 2:
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
                cout << "Opção inválida.\n";
        }
    } while (opcao != 5);

    return 0;
}
