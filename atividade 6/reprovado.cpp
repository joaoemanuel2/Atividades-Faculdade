#include <iostream>
using namespace std;

int main(){

int N1,N2;

cin >> N1 >> N2;

int media = (N1 * 2 + N2 * 3) /5;

if (media >= 7)
{
    cout << "Aprovado" << endl;
}
else if (media < 3)
{
    cout << "Reprovado" << endl;
}
else{
    cout << "Final" << endl;
}

    return 0;
}