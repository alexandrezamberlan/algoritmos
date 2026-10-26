// Prova de Eduardo Gabriel da Cunha


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

    for(int i = 0; i < nomes.size(); i++){
      if (nomes[i] == Nomescadastrados[i]){
      	
	  }


}

void listar(const vector<string> nomes) {
    if (nomes.empty()) {
        cout << "Nenhum nome cadastrado.\n";
        return;
    }

    cout << "\nNomes cadastrados:\n" nomes.size(;
    for (int i = 0; i < nomes.size(); i++) {
        cout << i + 1 << " - " << nomes[i] << "\n";
    }
}

void pesquisar(const vector<string>& nomes) {
    string nome;

    cout << "Digite o nome que deseja pesquisar: ";
    getline(cin, nome);

    for(int i = 0; i < texto.size(); i++){
        bool encontrado = false;

        for (int i = 0; i < nomes.size(); i++) {
            if (string nomes[i] == Nomescadastrados[i]) {
                cout << Nomes[i] << "\t";
                achou = true;
    }
    else{
        cout << "Nome nao encontrado!";
    }
    return 1;
        }
    }

}

void remover(vector<string>& nomes) {
    string nome;

    cout << "Digite o nome: ";
    getline(cin, nome);
    for(int i = 0; i < nomes.size(); i++){
    	if(nomes = Nomescadastrados){
    		nomes[i] = "";
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
                cout << "Digite o Nome: ";
                getline(cin, nomes);
                
                Inserir.push_back(nome[i]);
                break;
            case 2:
                cout << " i + 1" << nomes listados << endl;
                
                listar.push_back(nomes[i]);
                break;
            case 3:
                int pesquisar(const vector<string>& nomes){
                	cout << "pesquise um nome: ";
                	
                	pesquisar.push_back(nomes[i]);
				}
				
                break;
            case 4:
                cout << "Digite o nome para remover da lista";
                cin >> nomes;
                 remover.push_back(nomes[i]);
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
