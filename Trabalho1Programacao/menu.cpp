#include <iostream>

using namespace std;

int menuInicial()
{
    int op;
    cout << "1. Cadastrar" << endl;
    cout << "2. Listar" << endl;
    cout << "3. Editar" << endl;
    cout << "4 . Excluir" << endl;
    cout << "0. Sair" << endl;
    cin >> op;
    
    return op;
}

int menuSecundario()
{
    int op;
    cout << "1. Setor" << endl;
    cout << "2. Funcionario" << endl;
    cout << "3. Vacinas" << endl;
    cout << "4. Voltar" << endl;
    cin >> op;

    return op;
}

