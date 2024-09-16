#include <iostream>
#include <windows.h>
using namespace std;

void menu()
{
    SetConsoleOutputCP(CP_UTF8);

    cout << "Digite dois número:\n";
    cout << "+.soma\n";
    cout << "-.subtração\n";
    cout << "*.multiplicação\n";
}

void boas_vindas()
{
    int n1, n2;
    char op;
    char sn;
    cin >> n1 >> n2;
    cin >> op;

    do
    {
        if (op == '+')
        {
            cout << n1 + n2 << endl;
        }
        else if (op == '-')
        {
            cout << n1 - n2 << endl;
        }
        else if (op == '*')
        {
            cout << n1 * n2 << endl;
        }
        cout << "Continuar (s/n):\n";
        cin >> sn;
    } while (sn == 's' || sn == 'S');
}

int main()
{

    menu();
    boas_vindas();

    return 0;
}