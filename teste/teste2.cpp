#include <iostream>
using namespace std;

float doub()
{

   float num, dobro;

   cout << "Digite um numero: ";
   cin >> num;

   dobro = 2 * num;

   return dobro;
}
int main()
{

   float res;
   res = doub();

   cout << "Dobro: " << res << endl;

   return 0;
}