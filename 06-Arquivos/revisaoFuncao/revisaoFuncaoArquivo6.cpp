#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <sstream>
#include <fstream>

using namespace std;

#include "utils/meusMetodos.h"

int main() {
    //receber nome do arquivo
    string nomeArquivo;
    cout << "Digite caminho e nome do arquivo: ";
    cin >> nomeArquivo;
    
    //testar se o arquivo exite
    if (existeArquivo(nomeArquivo)) {
        cout << "Arquivo localizado com sucesso\n";        
    } else {
        cout << "Arquivo nao localizando\n";
        exit(0);
    }

    //receber o conteudo do arquivo em uma string
    string resposta = copiarArquivo2String(nomeArquivo);

    //exibir o conteudo da string
    cout << resposta;

    char letraOrigem;
    cout << "Digite a letra origem: ";
    cin >> letraOrigem;

    char letraDestino;
    cout << "Digite a letra destino: ";
    cin >> letraDestino;

    //receber a frase com o caracter de pesquisa substituido pelo @
    string respostaAlterada = trocarCaracterOrigemDestino(resposta, letraOrigem, letraDestino);

    //exibir a frase alterada
    cout << "Resposta alterada: " << respostaAlterada << endl;
    return 1;    
}