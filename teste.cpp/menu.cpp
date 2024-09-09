#include <iostream>
using namespace std;

int menu()
{
    int op;
    cout << "1.cadastrar pessoa." << endl;
    cout << "2.listar pessoas." << endl;
    cout << "0.sair." << endl;
    cin >> op;
    return op;
}