# Trabalho Prático: Sistema de Monitoramento Climático da Amazônia (EcoWatch)

## Contexto e Introdução
O Instituto Nacional de Pesquisas Espaciais (INPE) precisa de um protótipo funcional para registrar, armazenar e analisar dados climáticos, índices de calor, umidade e focos de incêndio em diferentes regiões da Amazônia Legal. 

Você foi contratado como desenvolvedor de software para criar o sistema **EcoWatch** em C++. Este sistema ajudará os analistas ambientais a tomarem decisões rápidas com base em relatórios consolidados e alertas em tempo real.


## Objetivos e Requisitos Técnicos
Para obter a nota máxima, o programa deverá ser desenvolvido obrigatoriamente utilizando os seguintes conceitos de Programação Estruturada:

1. **Estruturas de Dados (`struct`)**: Para modelar e encapsular os dados de cada registro climático de forma unificada.
2. **Vetores Dinâmicos (`vector`)**: Para gerenciar o armazenamento dinâmico dos dados em memória.
3. **Modularização (Funções e Métodos)**:
   * Pelo menos **duas funções sem retorno** (`void`).
   * Pelo menos **duas funções com retorno** (com tipos definidos como `double`, `int` ou `bool`).
   * Passagem de parâmetros por referência (`&`) quando for necessário alterar ou evitar a cópia desnecessária de dados.
4. **Manipulação de Arquivos Texto (`<fstream>`)**: 
   * O sistema deve carregar os dados salvos em um arquivo `.txt` automaticamente ao ser inicializado.
   * O sistema deve salvar todas as alterações no arquivo texto ao finalizar o programa de forma correta.
5. **Menu Interativo**: Uso de uma estrutura de repetição (`do-while`) controlando um fluxo de seleção (`switch-case`).


## Especificações do Sistema

### 1. A Estrutura de Dados
Crie uma `struct` chamada `RegistroClimatico` contendo exatamente os seguintes campos:
* `string regiao` (Nome da sub-região ou estado analisado)
* `double temperatura` (Temperatura registrada em graus Celsius)
* `int umidade` (Percentual da umidade do ar, variando de 0 a 100)
* `int focosIncendio` (Quantidade de focos de incêndio ativos detectados por satélite)

### 2. O Menu de Opções
O menu no método `main` deve seguir rigorosamente o padrão visual abaixo:
```text
=== SISTEMA ECOWATCH - AMAZÔNIA ===
1. Cadastrar Novo Registro
2. Visualizar Todos os Registros
3. Calcular Média de Temperatura
4. Emitir Alerta de Região Crítica
5. Salvar e Sair
Escolha uma opção:
```

### 3. Funções Obrigatórias a Implementar

* **`void cadastrarRegistro(vector<RegistroClimatico> &dados)`**
  * *Descrição*: Solicita ao usuário os dados de uma nova região, valida as entradas e insere o novo registro no final do vetor utilizando `push_back`.
* **`void exibirRelatorio(const vector<RegistroClimatico> &dados)`**
  * *Descrição*: Percorre o vetor de dados e exibe na tela todas as regiões cadastradas em formato de tabela organizada. Caso o vetor esteja vazio, deve exibir uma mensagem de aviso.
* **`double calcularMediaTemperatura(const vector<RegistroClimatico> &dados)`**
  * *Descrição*: Calcula e **retorna** a média aritmética das temperaturas de todas as regiões salvas. O resultado da média deve ser impresso de dentro da função `main`.
* **`int buscarRegiaoCritica(const vector<RegistroClimatico> &dados, string &nomeRegiao)`**
  * *Descrição*: Varre o vetor em busca da região com o **maior número de focos de incêndio**. A função deve **retornar** essa quantidade máxima de focos e preencher por referência o parâmetro `nomeRegiao` com o nome da localidade correspondente.
* **`void salvarArquivo(const vector<RegistroClimatico> &dados)`**
  * *Descrição*: Abre o arquivo `dados_climaticos.txt` e grava todas as informações utilizando um caractere separador (ex: ponto e vírgula `;`).
* **`void carregarArquivo(vector<RegistroClimatico> &dados)`**
  * *Descrição*: Executada logo no início do programa. Deve verificar se o arquivo `dados_climaticos.txt` existe. Se existir, lê linha por linha, reconstrói os objetos da `struct` e alimenta o vetor. Se não existir, exibe um aviso informando que o sistema iniciará com o banco de dados vazio.

