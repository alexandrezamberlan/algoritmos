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

    if (nome.empty()) {
        cout << "O nome nao pode ser vazio.\n";
        return;
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
    } else {
        nomes.push_back(nome);
        cout << "Nome inserido com sucesso.\n";
    } 
}

void listar(vector<string> nomes) {
    if (nomes.empty()) {
        cout << "Nenhum nome cadastrado.\n";
        return;
    }

    cout << "\nNomes cadastrados:\n";
    for (int i = 0; i < nomes.size(); i++) {
        cout << i + 1 << " - " << nomes[i] << "\n";
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

void remover(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome que deseja remover: ";
    getline(cin, nome);

    vector<string>::iterator encontrado =
        find(nomes.begin(), nomes.end(), nome);

    if (encontrado != nomes.end()) {
        nomes.erase(encontrado);
        cout << "Nome removido com sucesso.\n";
    } else {
        cout << "Nome nao encontrado.\n";
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
        if (!(cin >> opcao)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Digite um numero entre 1 e 5.\n";
            continue;
        }
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
                cout << "Opcao invalida.\n";
        }
    } while (opcao != 5);

    return 0;
}
