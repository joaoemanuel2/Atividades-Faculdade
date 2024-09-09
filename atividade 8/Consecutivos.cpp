#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int total = 1;
    int pontos = 1;
    int N;
    cin >> N;

    vector<int> valores(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> valores[i];
    }
    int i = 1;
    while (i < N)
    {
        if (valores[i] == valores[i - 1])
        {
            pontos++;
        }
        else
        {
            if (pontos > total)
            {
                total = pontos;
            }
            pontos = 1;
        }
    }
    if (pontos > total)
    {
        total = pontos;
        cout << total << endl;
    }
    /* for (int i = 1; i < N; ++i)
     {
         if (valores[i] == valores[i - 1])
         {
             pontos++;
         }
         else
         {
             if (pontos > total)
             {
                 total = pontos;
             }
             pontos = 1;
         }
     }
     if (pontos > total)
     {
         total = pontos;
     }
     cout << total <<endl;
     */
    return 0;
}