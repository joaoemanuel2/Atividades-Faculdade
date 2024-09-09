#include <iostream>
using namespace std;

int main (){

int x;

cout << "Digite o seu valor:";
cin >> x;

if (x > 0)
{
    cout << "O valor absoluto do seu numero e: ";
    cout << x;
}
else if
( x < 0){
    cout << "O valor absoluto do seu numero e:";
    cout << -x;
}

    return 0;
}