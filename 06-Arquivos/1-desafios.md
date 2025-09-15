# Exercícios pré uso de arquivos texto

1) Construa um programa (com módulo/método) que leia n nomes completos de pessoas e os exiba na tela;

2) Construa um programa (com módulo/método) que leia n nomes completos de pessoas e os adicione em um vetor de n posicoes em que deve ser armazenado o nome completoe o sobrenome. Use a seguinte estrutura;

typedef struct {
    string nomeCompleto;
    string sobreNome;
} Pessoa;

Dica: será preciso fazer uma função que extraia o sobrenome de um nome completo.

3) Construa um programa (com módulo/método) que leia n nomes de pessoas, armazena em um vetor de nomes e os exiba na tela. Porém, é necessário ao lado do nome mostrar quantos caractares tem esse nome.

# Exercícios COM USO de arquivos texto

1) Construa um programa (com módulo/método) que leia n nomes completos de pessoas DE UM ARQUIVO DE ORIGEM e os exiba na tela;

2) Construa um programa (com módulo/método) que leia n nomes completos de pessoas DE UM ARQUIVO DE ORIGEM e os adicione em um vetor de n posicoes em que deve ser armazenado o nome completo e o sobrenome. Use a seguinte estrutura;

typedef struct {
    string nomeCompleto;
    string sobreNome;
} Pessoa;

Dica: será preciso fazer uma função que extraia o sobrenome de um nome completo.

AO FINAL, ESSES DADOS (nomeCompleto e sobreNome) devem ser salvos em um arquivo de destino, da seguinte forma, por exemplo:

Alexandre de Oliveira Zamberlan; Zamberlan
Carlos Alberto Parreira; Parreira
Luisa Figueiredo; Figueiredo



3) Construa um programa (com módulo/método) que leia n nomes de pessoas DE UM ARQUIVO DE ORIGEM, armazena em um vetor de nomes e os exiba na tela. Porém, é necessário GRAVAR ESSES NOMES JUNTAMENTE COM A QUANTIDADE DE CARACTERES EM UM ARQUIVO DESTINO.