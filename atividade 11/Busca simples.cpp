#include <iostream>
using namespace std;

int main()
{
    int N, X, resul = 0;
    ;
    int V[10];

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    cin >> X;
    for (int i = 0; i < V[i]; i++)
    {
        if (X == V[i])
        {
            resul++;
        }
    }
    if (resul == 0)
    {
        cout << "nao_pertence";
    }
    else
    {
        cout << "pertence";
    }
    return 0;
}