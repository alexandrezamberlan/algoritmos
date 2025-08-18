//1) Fazer um programa em C ou C++ que preencha um vetor de string com n nomes e exiba-os

#include <iostream> //stdio.h
#include <string>   //string.h

#define TAM 4

using namespace std;

int main() {
    cout << "Fazer um programa em C ou C++ que preencha um vetor de string com n nomes e exiba-os" << endl;
    string nomes[TAM];
    int quantidadeInseridos = 0;
    int opcao;
    do {
        cout << "MENU" << endl;
        cout << "1 - Cadastrar nomes" << endl;
        cout << "2 - Listar nomes" << endl;
        cout << "3 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            cout << "Cadastrar nomes ..." << endl;
            if (quantidadeInseridos == TAM) {
                cout << "Vetor lotado...." << endl;
            } else {
                string nome;
                for (int i = 0; i < TAM; i++) {
                    cout << "Nome: ";
                    getline(cin, nome);
                    fflush(stdin);
                    //rotina que verifica se o nome ja esta no vetor de nomes

                    nomes[quantidadeInseridos] = nome;
                    quantidadeInseridos++;
                }
            }
            break;
        case 2:
            cout << "Listar nomes ..." << endl;
            if (quantidadeInseridos == 0) {
                cout << "Vetor de nomes vazio... nada a exibir ..." << endl;
            } else {
                for (int i = 0; i < quantidadeInseridos; i++) {
                    cout << "Nome " << (i+1) << ": " << nomes[i] << endl;
                }
                cout << "-----------------" << endl;
                cout << "Total de registros: " << quantidadeInseridos << endl;
            }
            break;
        case 3:
            cout << "Saindo do programa ..." << endl;
            break;
        default:
            cout << "Opcao invalida..." << endl;
            break;
        }
    } while (opcao != 3);
    return 1;
}