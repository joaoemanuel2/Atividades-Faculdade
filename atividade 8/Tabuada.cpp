#include <iostream>
using namespace std;

int main()
{

    int x;
    int aux = 1;

    cin >> x;
    while (aux <= 10)
    {
        cout << x << " * " << aux << " = " << x * aux << endl;
        aux++;
    }

    return 0;
}