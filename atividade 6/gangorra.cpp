#include <iostream>
using namespace std;

int main(){

int P1, C1, P2, C2,resul1,resul2;

cin >> P1 >> C1 >> P2 >> C2;

resul1 = P1 * C1;
resul2 = P2 * C2;

if (resul1 == resul2)
{
    cout << "0" << endl;
}
else if (resul2 < resul1 )
{
    cout << " -1" << endl;
}
else{
    cout << "1" << endl;
}
return 0;
}