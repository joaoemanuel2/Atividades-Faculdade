#include <iostream>
using namespace std;

int main()
{
    int N[10];
    int Menor;

    for (int i = 0; i < 10; i++)
    {
        cin >> N[i];
    }
    Menor = N[0];
    for (int i = 1; i < 10; i++)
    {
        if (N[i] < Menor)
        {
            Menor = N[i];
        }
    }
    cout << "Menor: " << Menor << endl;
    cout << "Ocorrencias: ";
    for (int i = 0; i < 10; i++)
    {
        if (N[i] == Menor)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if (N[i] == Menor)
        {
            N[i] = -1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << N[i] << " ";
    }
    cout << endl;
    return 0;
}
