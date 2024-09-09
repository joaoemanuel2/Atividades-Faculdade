#include <iostream>
#include <windows.h>
using namespace std;

int menu()
{
   SetConsoleOutputCP(CP_UTF8);//Código de acentuação

    int op;
    cout << "1.cadastrar pessoa para Vacinas." << endl;
    cout << "2.listar pessoas e vacinas." << endl;
    cout << "0.sair." << endl;
    cin >> op;
    return op;
}