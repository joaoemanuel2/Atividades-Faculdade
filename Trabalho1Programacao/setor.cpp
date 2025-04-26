#include <iostream>

using namespace std;

struct Setor
{
    int id;
    string tipo; // Administração, financeiro, marketing, logistica, tecnologia da informação, Recursos Humanos
    int andar;
    int sala;
};

Setor lerSetor()
{
    Setor setor;
    cout << "Digite o id do setor: ";
    cin >> setor.id;
    cout << "Digite o tipo do setor: ";
    getline(cin, setor.tipo);
    cout << "Digite o andar do setor: ";
    cin >> setor.andar;
    cout << "Digite a sala do setor: ";
    cin >> setor.sala;

    return setor;
}

void mostrarSetores(Setor s[], int count)
{
    cout << "--------------------INFORMACOES DOS SETORES--------------------" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Código: " << s[i].id << endl;
        cout << "Tipo: " << s[i].tipo << endl;
        cout << "Andar do setor: " << s[i].andar << endl;
        cout << "Sala do setor: " << s[i].sala << endl;
        cout << "---------------------------------------------------------------" << endl;
    }
}