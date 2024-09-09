#include <iostream>
#include <cmath>
using namespace std;

 int main (){

 int nume;

 cout << "Digite o um numero maior que zero:";
 cin >> nume;
 
    int quad = nume * nume ;
    int cubo = nume * nume * nume;
    double raiz = sqrt(nume);
 
   cout << "Seu numero ao quadrado e: " << quad << endl; 
   cout << "Seu numero ao cubo e: " << cubo << endl;
   cout << "A raiz quadrada do seu numero e: " << raiz  << endl;

    return 0;
 }

