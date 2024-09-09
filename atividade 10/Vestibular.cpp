#include <iostream>
using namespace std;

int main()
{

    char N1[80];
    char N2[80];
    int N3, N4 = 0;

    cin >> N3;
    for (int i = 0; i < N3; i++)
    {
        cin >> N1[i];
    }
    for (int i = 0; i < N3; i++)
    {
        cin >> N2[i];
        if (N1[i] == N2[i])
        {
            N4 = N4 + 1;
        }
    }
    cout << N4;
    return 0;
}