# include <iostream>
using namespace std;

int main (){

double num1 = 0.0;

cout << "Pense em um numero:" << endl;

cout << "Digite aqui:";
cin >> num1;

double resu1 = num1 * 5;
double resu2 = resu1 + 6;
double resu3 = resu2 * 4;
double resu4 = resu3 + 9;
double resu5 = resu4 * 5;

double subtrair = (resu5 - 165) / 100;

cout << "Seu numero:" << subtrair << endl;

 
    return 0;
}