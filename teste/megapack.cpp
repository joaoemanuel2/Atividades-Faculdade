#include <iostream>
using namespace std;

int main()
{

    int n1;
    int *n2 = 0;

    cin >> n1;
    n2 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> n2[i];
    }
    for (int i = 0; i < n1; i++)
    {
        if (n2[i] > 1, n2[i] < 0)
        {
            cout << n2[i] << ' ';
        }
    }
    /*for (int i = 0; i < n1; i++)
    {
        if (n2[i] > 0)
        {
            cout << n2[i] << ' ';
        }
    }*/

    return 0;
}