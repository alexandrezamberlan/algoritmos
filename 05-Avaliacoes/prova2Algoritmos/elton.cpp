// 0,5 se controlar duplicidade no primeiro exercicio

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

    bool encontrado = false;
    for (int i = 0; i < nomes.size(); i++)
    {
        if (nome == nomes[i])
        {
            encontrado = true;
            cout << "Nome ja cadastrado. Anana" << endl;
        }   
    }
    if (!encontrado)
    {
        nomes.push_back(nome);
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

    bool encontrado = false;
    for (int i = 0; i < nomes.size(); i++)
    {
        if (nome == nomes[i])
        {
            encontrado = true;
            cout << "Nome encontrado: " << nomes[i] << endl;
        }
    }
    if (!encontrado)
    {
        cout << "Nenhum nome encontrado..." << endl;
    }
}

void remover(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome que deseja pesquisar: ";
    getline(cin, nome);

    bool encontrado = false;
    for (int i = 0; i < nomes.size(); i++)
    {
        if (nome == nomes[i])
        {
            encontrado = true;
            nomes.erase(nomes.begin() + i);
        }
    }

    if (encontrado)
    {
        cout << "Nome removido..." << endl;
    }
    else
    {
        cout << "Nenhum nome encontrado..." << endl;
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
                cout << "Opcao invalida.\n";
        }
    } while (opcao != 5);

    return 0;
}