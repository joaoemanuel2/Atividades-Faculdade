#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double N;
    cin >> N;

    vector<double> sequencia(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> sequencia[i];
    }
    double i = 0;
    while (i < N)
    {

        double raiz = sqrt(sequencia[i]);
        i++;
        cout << fixed << setprecision(4) << raiz << endl;
    }

    return 0;
}