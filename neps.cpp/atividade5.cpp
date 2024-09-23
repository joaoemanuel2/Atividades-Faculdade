#include <iostream>
#include <string>
using namespace std;

int main()
{

    string reg[] = {"roraima", "acre", "amapa", "amazonas", "para", "rondonia", "tocantins"};
    string estado;

    getline(cin, estado);

    bool norte = false;
    for (int i = 0; i < 7; i++)
    {
        if (estado == reg[i])
        {
            norte = true;
            break;
        }
    }
    if (norte)
    {
        cout << "Regiao Norte\n";
    }
    else
    {
        cout << "Outra regiao\n";
    }

    return 0;
}