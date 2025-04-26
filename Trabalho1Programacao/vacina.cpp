#include <iostream>

using namespace std;

struct Vacina
{
    int id;
    string nome;
    int validade;
    string classificacao;
    string fabricante;
};

Vacina lerVacina()
{
    Vacina vacina;
    cout << "Digite o id da vacina: ";
    cin >> vacina.id;
    cout << "Digite o nome da vacina: ";
    getline(cin, vacina.nome);
    cout << "Digite a validade da vacina: ";
    cin >> vacina.validade;
    cout << "Digite a classificacao da vacina: ";
    getline(cin, vacina.classificacao);
    cout << "Digite o fabricante da vacina: ";
    getline(cin, vacina.fabricante);
}
