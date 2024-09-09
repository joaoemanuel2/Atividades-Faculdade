#include <iostream>
using namespace std;

struct pessoa
{
    string nome;
    int idade;
};
pessoa leDoteclado()
{
    pessoa p;
    cout << "nome: ";
    cin >> p.nome;
    cout << "idade: ";
    cin >> p.idade;
    return p;
}
void mostrarPessoas(pessoa p[], int n)
{
    cout << "!DADOS PESSOAIS!" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].nome << endl;
        cout << p[i].idade << "anos" << endl;
        cout << "----------------------------" << endl;
    }
}