#include <iostream>
using namespace std;

int main()
{

    int numero;
    int soma = 0;

    cin >> numero;

    for (int i = 1; i <= numero; ++i)
    {
        numero += numero;
        soma *= numero;
    }
    cout << soma;

    return 0;
}