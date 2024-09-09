#include <iostream>
#include <windows.h>
#include "menu.cpp"
#include "pessoas1.cpp"
using namespace std;

const int MAX_PESSOAS = 100;

int main()
{
    SetConsoleOutputCP(CP_UTF8); // Código de acentuação
    pessoa p[MAX_PESSOAS];
    int qtd = 0;
    int op;
    do
    {
        op = menu();
        if (op == 1)
        {
            p[qtd] = leDoteclado();
            qtd++;
            continue;
        }
        else if (op == 2)
        {
            mostrarPessoas(p, qtd);
        }
        else if (op != 0)
        {
            cout << "Número inválido!" << endl;
        }
    } while (op != 0);
    cout << "Saindo..." << endl;
    return 0;
}