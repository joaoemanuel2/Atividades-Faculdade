#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    
    double pi = 3.1416;
    double raio,area;

    cin >> raio;
    area = pi * (raio * raio);

    cout << fixed << setprecision(2) << area << endl;
    
    return 0;
}