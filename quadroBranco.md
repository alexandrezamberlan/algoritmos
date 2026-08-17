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
        ### 1. Cadastro de Clientes Simplificado
        Contexto: Uma loja precisa registrar seus clientes.
        
        * Struct: Cliente (Código, Idade, Telefone).
        * Menu:
        1. Cadastrar cliente (inserir no vetor).
           2. Listar todos os clientes cadastrados.
           3. Sair.
        
        ### 2. Controle de Estoque de Mercado
        Contexto: Um minimercado quer controlar a quantidade de produtos.
        
        * Struct: Produto (Código, Quantidade, Preço).
        * Menu:
        1. Cadastrar produto.
           2. Exibir o valor total investido no estoque (soma de Quantidade * Preço de todos os itens).
           3. Sair.
        
        ### 3. Diário de Notas Acadêmicas
        Contexto: Um professor precisa calcular médias da turma.
        
        * Struct: Aluno (Matrícula, Nota 1, Nota 2).
        * Menu:
        1. Cadastrar aluno e suas duas notas.
           2. Listar alunos mostrando a matrícula e a média aritmética das duas notas.
           3. Sair.
        
        ### 4. Gerenciador de Biblioteca
        Contexto: Uma biblioteca comunitária quer catalogar seus livros.
        
        * Struct: Livro (Código, Ano de Publicação, Páginas).
        * Menu:
        1. Cadastrar livro.
           2. Filtrar livros: Exibir apenas os livros publicados após o ano 2020.
           3. Sair.
        
        ### 5. Catálogo de Carros Usados (Filtro por Valor)
        Contexto: Uma concessionária quer ajudar clientes a encontrar carros por preço.
        
        * Struct: Carro (Código, Ano, Preço).
        * Menu:
        1. Cadastrar carro.
           2. Buscar por preço: O usuário digita um valor máximo, e o programa mostra todos os carros mais baratos que esse valor.
           3. Sair.
        
        ### 6. Relatório de Altura e Peso (Maior e Menor)
        Contexto: Uma academia está avaliando o perfil físico dos alunos.
        
        * Struct: Perfil (Código, Peso, Altura).
        * Menu:
        1. Cadastrar aluno.
           2. Exibir o aluno mais alto cadastrado até o momento (busca de maior valor).
           3. Sair.
        
        ### 7. Conta Bancária Simplificada (Alteração de Dados)
        Contexto: Um banco precisa atualizar saldos.
        
        * Struct: Conta (Número da Conta, Saldo).
        * Menu:
        1. Cadastrar conta (saldo inicial).
           2. Depositar: O usuário escolhe uma posição do vetor (índice) e soma um valor ao saldo existente.
           3. Mostrar todas as contas.
           4. Sair.
        
        ### 8. Gestão de Consumo de Energia
        Contexto: Uma empresa de energia quer identificar residências com alto consumo.
        
        * Struct: Imóvel (Número da Casa, Consumo kWh).
        * Menu:
        1. Cadastrar imóvel.
           2. Calcular a média de consumo geral da rua.
           3. Listar imóveis que consomem acima da média calculada.
           4. Sair.
        
        ### 9. Controle de Pontuação de Jogadores
        Contexto: Um campeonato de eSports precisa monitorar o placar.
        
        * Struct: Jogador (ID do Jogador, Pontos).
        * Menu:
        1. Cadastrar jogador.
           2. Buscar jogador por ID: O usuário digita o ID, o programa varre o vetor e mostra os pontos dele (ou diz que não foi encontrado).
           3. Sair.
        
        ### 10. Sistema de RH (Filtro Condicional Duplo)
        Contexto: O departamento de recursos humanos quer analisar a folha de pagamento.
        
        * Struct: Funcionario (Código, Idade, Salário).
        * Menu:
        1. Cadastrar funcionário.
           2. Contar e exibir quantos funcionários têm mais de 40 anos e ganham mais de R$ 5.000,00.
           3. Sair.
       
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
