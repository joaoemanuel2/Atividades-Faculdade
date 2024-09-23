#include <iostream>
using namespace std;

int main()
{

    int n, p, q, r;
    char c;

    cin >> n;
    cin >> p >> c >> q;

    if (c == '+')
    {
        r = p + q;
        if (r <= n)
        {
            cout << "OK\n";
        }
        else
        {
            cout << "OVERFLOW";
        }
    }
    else if (c == '*')
    {

        r = p * q;
        if (r <= n)
        {
            cout << "OK\n";
        }
        else
        {
            cout << "OVERFLOW";
        }
    }

    return 0;
}