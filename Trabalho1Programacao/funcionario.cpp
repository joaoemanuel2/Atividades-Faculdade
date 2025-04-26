#include <iostream>
#include "vacina.cpp";

using namespace std;

struct Funcionario
{
    int idFuncionario;
    string nome;
    int idade;
    string cpf;
    string cargo;
    Vacina v[100];
};

Funcionario lerFuncionario()
{
    Funcionario funcionario;
    cout << "Id: ";
    cin >> funcionario.idFuncionario;
    cout << "Nome: ";
    getline(cin, funcionario.nome);
    cout << "Idade: ";
    cin >> funcionario.idade;
    cout << "CPF: ";
    cin >> funcionario.cpf;
    cout << "Cargo: ";
    cin >> funcionario.cargo;
    
    return funcionario;
}

void mostrarFuncionarios(Funcionario f[], int count)
{
    cout << "--------------------DADOS DOS0 FUNCIONARIOS--------------------" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Id: " << f[i].idFuncionario;
        cout << "Nome: " << f[i].nome << endl;
        cout << "Idade: " << f[i].idade << endl;
        cout << "CPF: " << f[i].cpf << endl;
        cout << "Cargo: " << f[i].cargo << endl;
        cout << "---------------------------------------------------------------" << endl;
    }
}