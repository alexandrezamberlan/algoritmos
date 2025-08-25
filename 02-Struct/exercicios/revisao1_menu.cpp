#include <iostream> // <stdio.h>
#include <string>
#define TAM 4
using namespace std;

#include "meusIncludes.h"
#include "meusMetodos.h"


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
        fflush(stdin); //metodo com 1 parâmetro (stdin) e sem retorno

        switch (opcao)
        {
        case 1:
            emprestar(meusItens, item, qtdEmprestimos); //método com 3 parâmetros sem retorno
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