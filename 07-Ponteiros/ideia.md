# Gestão de Ponteiros e Alocação Dinâmica

    - Ponteiros é uma variável que armazena UM ENDEREÇO DE MEMÓRIA
    - Por exemplos,
        int idade;      //imaginando que a variável idade esteja no endereço AABB3
        idade = 230;    //variável idade armazena o inteiro 230
        int *pIdade; //essa variável armazena um endereço de memória de uma variável do tipo int
        pIdade = &idade; //isso significa que pIdade esta armazenando AABB3

        cout << pIdade; //será exibido 
        
        cout << &idade; //será exibido AABB3
        cout << idade; //será exibido 230
        cout << *pIdade;

## Regras
    1) todo vetor ou matriz é um pontiero
    2) há passagem de parâmetros por valor e por referência (endereço)
    3) uso de ponteiros permite que um método possa 'retornar' n valores (passagem de parâmetros por referência)
    4) há endereços implícitos - vetores e matrizes
    5) há endereços explícitos &variavel -> *variavel


