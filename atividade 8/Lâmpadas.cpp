#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int A = 0;
    int B = 0;
    int N;

    cin >> N;
    vector<int> sequencia(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> sequencia[i];
    }
    int i = 0;
    while (i < N)
    {
        if (sequencia[i] == 1)
        {
            A = !A;
        }
        else if (sequencia[i] == 2)
        {
            A = !A;
            B = !B;
        }
        cout << A << endl;
        cout << B << endl;
        break;
    }
    /*for (int i = 0; i < N; ++i)
    {
        if (sequencia[i] == 1)
        {
            A = !A;
        }
        else if (sequencia[i] == 2)
        {
            A = !A;
            B = !B;
        }
    }
    cout << A << endl;
    cout << B << endl;
    */
    return 0;
}