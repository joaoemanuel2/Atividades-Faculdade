#include <iostream>
#include <cmath>
using namespace std;

int main(){

double altura,peso;

cout << "Digite a sua altura em (cm):";
cin >> altura;

cout << "Digite o seu peso em (kg):";
cin >> peso;

double soma1 = altura * altura ;
double soma2 = peso /soma1;
 
if (soma2 < 18.5)
{
    cout <<"Sua Classificacao e abaixo do peso:\n"; 
}
else if (soma2 < 24.9)
{
    cout << "Sua Classificacao e peso saudavel:\n";
}
else if (soma2 < 29.9)
{
    cout << "Sua Classificacao e sobrepeso:\n";
}
else if (soma2 < 39.9)
{
    cout << "Sua Classificacao e obeso:\n";
}
else if (soma2 < 40)
{
    cout << "Sua Classificacao e muito obeso:\n";
}

cout << "O seu imc e: "  << round(soma2) << endl;

return 0;

}