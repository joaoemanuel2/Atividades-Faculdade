#include <iostream>
#include <windows.h>
using namespace std;

struct pessoa
{
    string nome;
    int idade;
    char sexo;
};
pessoa leDoteclado()
{
    SetConsoleOutputCP(CP_UTF8); // Código de acentuação
    pessoa p;
    cout << "Digite o nome: ";
    cin >> p.nome;
    cout << "Digite a idade: ";
    cin >> p.idade;
    cout << "Digite o sexo: ";
    cin >> p.sexo;
    return p;
}
void mostrarPessoas(pessoa p[], int n)
{
    cout << "!DADOS PESSOAIS!" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].nome << endl;
        cout << p[i].idade << " anos" << endl;
        cout << p[i].sexo << endl;
        for (int i = 0; i < n; i++)
        {
            if (p[i].idade < 10)
            {
                cout << "Tomar vacinas A, B, C, D e E." << endl;
            }
            else if (p[i].idade < 14 && p[i].sexo == 'F')
            {
                cout << "Tomar vacinas F e G." << endl;
            }
            else if (p[i].idade < 14 && p[i].sexo == 'M')
            {
                cout << "Tomar vacina G." << endl;
            }
            else if (p[i].idade < 60)
            {
                cout << "Sua vacina e H." << endl;
            }
            else
            {
                cout << "Tomar vacina X e Y." << endl;
            }
        }
        cout << "----------------------------" << endl;
    }
}