#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cin >> x;
    cin >> y;
    
    if (x > 0 && y > 0) {
        cout << "Q1" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Q2" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Q4" << endl;
    } else {
        cout << "eixos" << endl;
    }
    
    return 0;
}