# Quadro Branco e Plano de aulas

# Aula 16
    - Projetar, implementar e testar um sistema terminal, com uso de menu, vetor de dados (tipo struct) e uso de arquivo (base de dados).

    ```
    Menu
    1 - Cadastrar
    2 - Listar
    3 - Remover
    4 - Pesquisar
    5 - Sair
    Opção
    ```

    Observações: 
        1) Ao entrar no sistema, é preciso disparar o método ou a função conectarBase(vetor, TAM, nomeArquivoBase) e retorna a quantidade de dados do arquivo;
        2) Cadastrar uma degustação, entrando com data, nome do alimento ou da bebida, uma nota (de 1 a 5), nome do fabricante e um comentário.
        3) Uma degustação deve ser armazenada:
            a) vetor de Degustação
            b) arquivo baseDados.dat ou baseDados.csv
                ```
                10/11/2025;Cerveja Pilsen;5;Mainz;Cerveja forte
                11/11/2025;Queijo colonial;4;Da Colonia;Queijo ainda cru
                ```
        4) As funcionalidade Remover e Pesquisar devem ser pelo nome do alimento ou da bebida (nomeAlimento).
        5) Sempre que uma degustação for cadastrada ou removido, o arquivo deve ser atualizado.


    ```
    #define TAM 1000

    typedef struct {
        string dataDegustacao;
        string comentario;
        int nota; //1 a 5
        string nomeAlimento;
        string fabricante;
    } Degustacao;

    Degustacao vetor[TAM];
    ```

# Aula 15
    Correção da prova

# Aula 14
    Prova prática em laboratório

# Aula 13
    Passagem de parâmetros com valor ou com referência (ponteiros)

# Aula 12
    Ponteiros

## Aula 11
    - Trabalhar:
        1) Menu: conectar com a base; listar dados; inserir dados
        2) Vetor de struct: 
            typedef struct {
                string nome;
                string email;
            } Pessoa;
        3) Leitura e escrita de arquivo csv
            ifstream - leitura
            ofstream - escrita
            split()

    - Desafio avaliativo:
        Combinar os programas da Garagem e o da aula, refatorando-os de forma que toda a placa de carro que entre na garagem, além de ser salva no vetor/lista/garagem, também seja salva no arquivo.
        1) struct:
        ```
        typedef struct {
            string placa;
            string dataEntrada;
        } Veiculo;
        ```
        2) garagem é um vetor de TAM veiculos:
        ```
        Veiculo garagem[TAM];
        ```
        3) Menu (antes de executar o menu, conectarBase)
            1) Entrada veiculo (digitar a placa e a data de entrada, mas pode-se capturar do sistema. Inserir no vetor e no arquivo)
            2) Listagem veiculos
            3) Saida veiculo (digitar a placa e retirar da garagem, tanto vetor, quanto arquivo
            4) Fim programa
          

## Aula 10
    - Manipulação de arquivos texto
        - leitura
        - escrita

## Aula 9
    - Funções mais arquivos (leitura e escrita)
        - Exercícios de fixação combinando funções com uso de arquivo texto
            1) Criar um programa que tenha uma função que receba uma frase e retorne a quantidade de vogais;
            2) Criar um programa que tenha uma função que receba uma frase e um caracter de pesquisa. A função deve retornar a frase substituindo o caracter de pesquisa pelo símbolo @.
                Por exemplo, Frase: "Turma de Algoritmos"
                             Letra de pesquisa: 'a' 
                             Resultado: "Turm@ de @lgoritmos"
            3) Criar um programa que tenha duas funções:
                - função que receba uma frase e a retorne em maiúsculo
                - função que receba uma frase e retorne a quantidade de palavras
            4) Criar um programa que tenha duas funções:
                - função que receba o nome de um arquivo texto (.csv, .txt, .json, .dat) e retorne True caso o arquivo exista; ou False, caso contrário;
                - função que receba o arquivo e retorne em uma string o conteúdo desse arquivo texto.
            5) Criar um programa que tenha uma função que receba um nome de arquivo texto e retorne a quantidade de vogais;
            6) Criar um programa que tenha uma função que receba um nome de arquivo texto e um caracter de pesquisa. A função deve retornar uma string contendo o conteúdo do arquivo, contudo substituindo o caracter de pesquisa pelo símbolo @.
                Por exemplo, Frase: "Turma de Algoritmos"
                             Letra de pesquisa: 'a' 
                             Resultado: "Turm@ de @lgoritmos"
            7) Criar um programa que tenha duas funções:
                - função que receba um nome de arquivo texto e a retorne uma string com todas as palavras em maiusculo;
                - função que receba um nome de arquivo texto e retorne a quantidade de palavras neste arquivo

## Aula 8
    - Correção e discussão da prova
    - Introdução a manipulação de arquivos texto (leitura)

## Aula 7
    - Avaliação teórica

## Aula 6
    - Programação em módulos
        - métodos ou funções ou procedimentos
            - função é um método com retorno - RETURN
            - procedimento é um método sem retorno - VOID

        - métodos devem ter:
            - assinatura
                void nomeMetodo(int a, string b, int vetor[]) { // tipo de retorno ou void (sem retorno), nome do método e lista de parâmetros
                }

                string nomeMetodo(int x) { //tipo de retorno string, nome do metodo e lista de parâmetros
                }

## Aula 5 
    - Programação estrutural e procedural
        - até então, programou sequencialmente - 'a la script'
        - modularização
            - dividir o código/programa em métodos (função ou procedimento)

## Aula 4
    - Correção e discussão dos exercícios aula anterior
    - Mais exercícios de fixação
        - vetores
        - menus        

    - Exercícios
        1) Fazer um programa em C ou C++ que preencha um vetor de string com n nomes; exiba-os
        2) A partir do programa anterior, fazer uma rotina que pesquise um nome ou parte do nome entre os nomes cadastrados no vetor de nomes
        3) A partir do programa anterior, pesquise o método de ordenação da bolha ou bubble sort, e aplique no vetor de nomes do código anterior, exibindo os nomes cadastrados.
        4) Tendo como base o menu criado para os códigos anteriores, faça um programa que receba dados de glicemia de um paciente diabetico; calcule e exiba a média da glicemia; calcule e exiba e mediana da glicemia; exiba todos os valores cadastrados
            Menu
            1 - Cadastrar dados glicemicos (45 a 450)
            2 - Mostrar dados glicemicos
            3 - Calcular e exibir media
            4 - Calcular e exibir mediana
            5 - Sair
            Opcao:

## Aula 3 
Momento de revisão
    - programando um menu
    - usando structs
    - capturando data e hora do sistema
    - tratando pedaços de string

Exercicios de fixação

1) executar e analisar os códigos de tratamento de data e hora
2) levar parte desses códigos para o programa Garagem e/ou Emprestimo
3) criar um programa que receba n nomes de filmes e suas respectivas categorias romance, ficção, terror), armazenando em um vetor de filmes de tamanho n. Criar uma rotina que pesquise partes de nomes de filmes e exiba os que tiverem esse trecho.
Sugestão é utilizar um menu
1 - Cadastrar livros
2 - Listar livros
3 - Pesquisar por títulos de livros

## Aula 2
    - Uso de struct em C ou C++
    - Uso de struct com vetores

## Aula 1
    - Apresentação e discussão do plano de ensino
    - Revisão
