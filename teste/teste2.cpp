#include <iostream>
using namespace std;

int main()
{

   int base, expoente;

   cin >> base;
   cin >> expoente;

   for (int i = 1; i < expoente; i++)
   {
      base *= i;
   }
   cout << base;

   return 0;
}