#include <iostream>
using namespace std;

 int main(){

double polegadas;
double pe;
double jarda;
double milha;

cout << "Digite seu valor:";
cin >> pe;

 polegadas = pe * 12;
 jarda = pe / 3;
 milha = jarda / 1.76;
 
 cout << "Seu numero em : " << polegadas << " polegada " << endl;
 cout << "Seu numero em jarda: " << jarda << " jardas " << endl;
 cout << "Seu numero em milha: " << milha << " milhas " << endl;

    return 0;

 }