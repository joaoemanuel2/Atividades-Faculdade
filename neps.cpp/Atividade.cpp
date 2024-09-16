#include <iostream>
using namespace std;

int main()
{

    int n, soma = 1;

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        soma *= i;
    }
    cout << soma;
    return 0;
}