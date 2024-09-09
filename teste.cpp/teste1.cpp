#include <iostream>
#include "menu.cpp"
#include "pessoas.cpp"
using namespace std;
const int MAX_PESSOAS = 100;
int main()
{
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
        }
        else if (op == 2)
        {
            mostrarPessoas(p, qtd);
        }
        else if (op != 0)
        {
            cout << "escolher outro cara!" << endl;
        }
    } while (op != 0);
    cout << "saindo..." << endl;
    return 0;
}