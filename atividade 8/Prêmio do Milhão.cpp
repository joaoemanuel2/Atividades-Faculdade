#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int N;
    cin >> N;

    vector<int> acessos(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> acessos[i];
    }
    int soma = 0;
    int dias = 0;
    for (; soma <= 1000000 && dias < N; dias++)
    {
        soma += acessos[dias];
        dias++;
    }
    for (; soma >= 1000000; dias++)
    {
        cout << dias;
        dias++;
    }

    return 0;
}