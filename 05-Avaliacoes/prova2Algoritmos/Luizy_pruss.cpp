#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

void inserir(vector<string>& nomes) {

    string nome;
    cout << "Digite o nome:";
    getline(cin, nome);
    nomes.push_back(nome);

    cout << "Nome  inserido\n";               //complete o código abaixo

}

void listar(const vector<string> nomes) {
    if (nomes.empty()) {
        cout << "Nenhum nome cadastrado.\n";   // confirma que  foi digitado
        return;
    }

    cout << "Nomes cadastrados:\n";
    for (int i = 0; i < nomes.size(); i++) {      // lista de nomes cadastrados
        cout << i + 1 << " - " << nomes[i] << "\n";
    }
}

void pesquisar(const vector<string>& nomes) {
    string nome;
    cout << "Digite o nome que deseja pesquisar:\n";
    getline(cin, nome);

    bool encontrou = false;

    for (int i = 0; i < nomes.size(); i++) {  //complete o código abaixo
        if (nomes[i] == nome){
            cout << "Nomes encontrados na posição" << i + i <<;
            encontrou = true; 
        }

        if (!encontrou){
            cout << "nome não encontrado";
        }
    }

}   

 void remover(const vector<string>& nomes) {  //crie o método remover
    string nome;
    int i = 0;

    cout << "\nDigite o nome que gostaria de remove:\n";
    getline(cin,nome);

    while( i < nomes.size()){

        if (nomes[i] == nome){
            nomes.erase (nomes.begin() + i);
            cout << "Nome removido\n"
            return;

        }
        i++;

    }
        cout <<"\nNome não encontrado\n"; 
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