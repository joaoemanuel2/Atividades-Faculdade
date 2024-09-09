#include <iostream>
#include <cmath>
using namespace std;

int main(){

int num1,num2;

cout << "Digite o primeiro numero: ";
cin >> num1;

if (num1 <= 0){
    cout << "A numero deve ser maior que zero:" << endl;
}

cout << "Digite o segundo numero: ";
cin >> num2;

if (num2 <= 0){
    cout << "O segundo numero deve ser maior que zero:" << endl;
}

double resul = pow (num1, num2);

cout <<"O seu resultado e: " << resul << endl;

    return 0;
}