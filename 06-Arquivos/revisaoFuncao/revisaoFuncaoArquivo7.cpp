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

    string respostaMaiuscula = paraMaiusculo(resposta);

    cout << "Arquivo com seu conteudo em maiusuclo: " << respostaMaiuscula << endl;

    int quantidadePalavras = contarPalavras(resposta);

    cout << "Quantidade de palavras no arquivo: " << quantidadePalavras << endl;

    return 1;    
}