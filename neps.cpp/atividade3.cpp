#include <iostream>
using namespace std;

int main()
{

    int l1, a1;
    int l2, a2;
    int soma1, soma2;

    cin >> l1 >> a1;
    cin >> l2 >> a2;

    soma1 = l1 + a1;
    soma2 = l2 + a2;

    if (soma1 > soma2)
    {
        cout << "Primeiro\n";
    }
    else if (soma1 < soma2)
    {
        cout << "Segundo\n";
    }
    else
    {
        cout << "Empate";
    }

    return 0;
}