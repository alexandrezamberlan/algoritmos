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

    if(nome.empty()) {
        cout << "Nome nao registrado" << endl;
        return;
    }

    nomes.push_back(nome);
    cout << "Nome adicionado!";

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

void pesquisar(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome que deseja pesquisar: ";
    getline(cin, nome);

    int posicao = buscarPosicao (nomes, nome);

    if (posicao == -1) {
        cout << "Nome" << nome << " " << endl;
    } else {
        cout << "Nome encontrado" << endl;
    }

}

void remover(vector<string>& nomes) {
    string nome;
    int buscarPosicao;
    
    if (nomes.empty()) {
        cout << "Nenhum nome registrado" << endl;
        return;
    }

    cout << "Digite o nome a ser removido: " << endl;
    getline(cin, nome);

    int posicao = buscarPosicao(nomes, nome);

    if (posicao == -1) {
        cout << "Nome " << nome << "" << endl;
    } else {

        nomes.erase(nomes.begin()) + posicao;
        cout << "Nome removido" << endl;
        
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