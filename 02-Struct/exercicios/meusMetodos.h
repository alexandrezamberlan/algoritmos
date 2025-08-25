

void emprestar(Emprestimo meusItens[], Emprestimo item, int qtdEmprestimos) {
    cout << "AREA DE EMPRESTIMO" << endl;
    if (qtdEmprestimos == TAM) {
        cout << "Voce nao tem mais itens para emprestar..." << endl;
    } else {
        cout << "Pessoa: ";
        getline(cin, item.nome); //método com 2 parâmetros e sem retorno
        fflush(stdin);
        cout << "Numero de celular: ";
        cin >> item.celular;
        fflush(stdin);
        cout << "Item: ";
        getline(cin,item.descricao);
        fflush(stdin);
        //rotina para verificar se o item ja nao foi emprestado

        //rotina para capturar a data do emprestimo
        time_t agora = time(nullptr); //método com um parâmetro e com retorno
        tm* agora_local = localtime(&agora); 

        string dia = to_string(agora_local->tm_mday);
        string mes = to_string(agora_local->tm_mon + 1);
        string ano = to_string(agora_local->tm_year + 1900);

        item.data =  dia + "/" + mes + "/" + ano + "\n";



        //armazenar na base temporaria
        meusItens[qtdEmprestimos] = item;
        qtdEmprestimos++;
        cout << "Item registrado com sucesso...." << endl;
    }
}