#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

    double X = 0.000;
    double Y = 0.000;
    double resultado = 0.0000;

    cin >> X;
    cin >> Y; 
    for (; X >= 0;)
{
    resultado = pow(X, Y);
    cout << fixed << setprecision(4) << resultado << endl;
    break;
}  
   return 0;
}
