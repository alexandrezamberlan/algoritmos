Atividade da Aula 05/11

A partir da base de telefonia https://github.com/alexandrezamberlan/pesquisa_ordenacao/blob/master/05-hash/problemaSessaoTelefonia/telephony_sessions.txt, criar um programa em C ou C++ para:

1) ler a base de telefonia e armazenar em um vector do tipo Telefone
    - o struct será:
        typedef struct {
            string numeroCelular;
            string dadosSessao;
        } Telefone;

        vector<Telefone> listaSessoes;

2) oferecer um menu para o usuário do tipo:
    - Menu
        1) Listar telefones e mostrar a quantidade
        2) Pesquisar por telefone (o usuario digita um numero de telefone e o sistema retorna seus dados de sessão)
        3) Finalizar ou encerrar programa

3) reutilizar os métodos:

```c++
#include <cstring>
#include <ctype.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

typedef struct {
    string numeroCelular;
    string dadosSessao;
} Telefone;

string *split(string frase, string delimitador = " ")
{
    string *vetor = (string *)malloc(sizeof(string) * 3); //alocando um vetor de string com 3 posições
    int inicio = 0;
    int fim = frase.find(delimitador);
    int i = 0;
    while (fim != -1) {
        vetor[i] = frase.substr(inicio, fim - inicio);
        inicio = fim + delimitador.size();
        fim = frase.find(delimitador, inicio);
        i++;
    }
    vetor[i] = frase.substr(inicio, fim - inicio);

    return vetor;
}


int main() {
    vector<Telefone> listaSessoes;
    string opcao;

    //método que carrega a base de telefonia e armazena numero de celular e dados de sessao no vector listaSessoes

    do {
        cout << "MENU\n"
        cout << "1 - Listar telefones\n";
        cout << "2 - Pesquisar telefone e dados de sessao\n";
        cout << "3 - Finalizar\n";
        cout << "Opcao: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            "1": 
                //metodo que lista somente os numeros de celular um abaixo do outro e no final mostra a quantidade de celulares exibidos

                break;
            "2":
                //metodo que o usuario digita um numero de celular, o sistema o localiza e se localizado, mostra seus dados de sessao
                break;
            "3":
                cout << "Obrigado por usar o sistema\n";
                break;
            default:
                cout << "Opcao invalida!\n";
                break;
        }
    } while (opcao != "3");

    return 1;
}
```