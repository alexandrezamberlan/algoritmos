#include <iostream> // <stdio.h>
#include <string>
#define TAM 4
using namespace std;

#include "meusIncludes.h"

int main() 
{
    int opcao;
    Emprestimo meusItens[TAM]; //base de dados temporaria - transiente
    Emprestimo item; 
    int qtdEmprestimos = 0;

    do 
    {
        cout << "M E N U" << endl;
        cout << "1 - Emprestar" << endl;
        cout << "2 - Devolver" << endl;
        cout << "3 - Listar emprestimos" << endl;
        cout << "4 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            cout << "AREA DE EMPRESTIMO" << endl;
            if (qtdEmprestimos == TAM) {
                cout << "Voce nao tem mais itens para emprestar..." << endl;
            } else {
                cout << "Pessoa: ";
                getline(cin, item.nome);
                fflush(stdin);
                cout << "Numero de celular: ";
                cin >> item.celular;
                fflush(stdin);
                cout << "Item: ";
                getline(cin,item.descricao);
                fflush(stdin);
                //rotina para verificar se o item ja nao foi emprestado

                //rotina para capturar a data do emprestimo
                time_t agora = time(nullptr);
                tm* agora_local = localtime(&agora);

                string dia = to_string(agora_local->tm_mday);
                string mes = to_string(agora_local->tm_mon + 1);
                string ano = to_string(agora_local->tm_year + 1900);

                item.data =  dia + "/" + mes + "/" + ano + "\n";

    

                //armazenar na base temporaria
                meusItens[qtdEmprestimos] = item;
                qtdEmprestimos++;
                cout << "Item registrado com sucesso...." << endl;
            }
            break;
        case 2:
            cout << "AREA DE DEVOLUCAO" << endl;
            if (qtdEmprestimos == 0) {
                cout << "Nenhum item esta emprestado" << endl;
            } else {
                
            }
            break;
        case 3:
            cout << "LISTAGEM DE EMPRESTIMOS" << endl;
            if (qtdEmprestimos == 0) {
                cout << "Nenhum item esta emprestado" << endl;
            } else {
                for (int i = 0; i < qtdEmprestimos; i++) {
                    cout << "Item: "<< meusItens[i].descricao << endl;
                    cout << "Pessoa: "<< meusItens[i].nome << ". Celular: " << meusItens[i].celular << endl;
                    cout << "Data do emprestimos: "<< meusItens[i].data << endl;
                    cout << "----------------------------" << endl;
                }
            }
            break;
        case 4:
            cout << "Voce esta encerrando o programa...." << endl;
            break;
        default:
            cout << "Opcao invalida...." << endl;
            break;
        }        
    } while (opcao != 4);
    cout << "Programa encerrado....\n";
    return 1;
}