

## 🧠 **10 Exercícios de Fixação – Structs, Funções e Arquivos (C/C++)**

---

### **1. Cadastro simples de alunos**

Crie uma `struct Aluno` com os campos: `nome`, `matricula` e `nota`.
Faça um programa que leia **5 alunos**, armazene-os em um **vetor de structs** e exiba todos na tela.

> Use apenas funções sem retorno (void).

---

### **2. Média das notas**

A partir do exercício anterior, crie uma **função com retorno** que receba o vetor de alunos e retorne a **média geral das notas**.
Mostre o resultado no programa principal.

---

### **3. Busca por matrícula**

Implemente uma **função com retorno** que receba o vetor de alunos e um número de matrícula.
A função deve **retornar o índice** do aluno, caso encontrado, ou **-1**, caso contrário.
No `main`, permita que o usuário digite uma matrícula e exiba os dados do aluno correspondente.

---

### **4. Salvar em arquivo texto**

Usando a struct `Aluno` do exercício anterior, grave os dados de todos os alunos em um **arquivo texto chamado “alunos.txt”**, um por linha.

> Utilize `fprintf` ou `ofstream` (em C++).

---

### **5. Ler arquivo texto**

Implemente uma função que leia o arquivo “alunos.txt” e carregue os dados para um **vetor de structs** novamente, exibindo-os na tela.

> Dica: use `fscanf` (C) ou `getline` (C++).

---

### **6. Cadastro de produtos**

Crie uma `struct Produto` com: `codigo`, `descricao`, `preco` e `quantidade`.
Implemente funções:

* `void cadastrar(Produto vet[], int n);`
* `void listar(Produto vet[], int n);`
* `float calcularTotal(Produto vet[], int n);` → retorna o valor total em estoque.

Grave os dados em um arquivo texto chamado **“estoque.txt”**.

---

### **7. Atualizar quantidade em arquivo**

Amplie o exercício anterior.
Crie uma função que receba o código de um produto e uma nova quantidade.
A função deve **atualizar o arquivo “estoque.txt”** com a nova informação.

---

### **8. Sistema de pontuação de jogadores**

Crie uma `struct Jogador` com `nome`, `pontuacao` e `nivel`.
Implemente:

* Função para cadastrar jogadores em um vetor.
* Função para ordenar o vetor por pontuação (usando Bubble Sort ou qualquer algoritmo).
* Função que grave o ranking em um arquivo texto.

---

### **9. Controle de biblioteca**

Crie uma `struct Livro` com os campos: `titulo`, `autor`, `ano` e `status` (0 = disponível, 1 = emprestado).
Implemente funções para:

* Cadastrar livros em um vetor.
* Listar todos.
* Emprestar (alterar status).
* Salvar e ler os dados de/para um arquivo “livros.txt”.

---

### **10. Relatório de vendas com funções**

Crie uma `struct Venda` com `produto`, `quantidade`, `valor_unitario` e `data`.
Implemente:

* Função para cadastrar vendas e gravar em “vendas.txt”.
* Função para ler o arquivo e exibir todas as vendas.
* Função com retorno que **calcule o total vendido em determinado dia** (passado como parâmetro).
* Função para gerar um **relatório geral de vendas** (exibir total e média).

---

💡 **Dica para integração final (opcional):**
Como desafio extra, peça para os alunos **combinar dois dos exercícios** (por exemplo, produtos e vendas), criando um mini sistema que:

* Leia e grave dados de dois arquivos;
* Use structs com vetores;
* Utilize funções com e sem retorno.

