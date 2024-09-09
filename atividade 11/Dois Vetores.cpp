#include <iostream>
using namespace std;
int main()
{
   int valor_inicial[10];

   for (int i = 0; i < 10; i++)
   {
      cin >> valor_inicial[i];
   }
   for (int i = 0; i < 10; i++)
   {
      if (valor_inicial[i] % 2 == 0)
      {
         cout << valor_inicial[i] << ' ';
      }
   }
   cout << endl;
   for (int i = 0; i < 10; i++)
   {
      if (valor_inicial[i] % 2 != 0)
      {
         cout << valor_inicial[i] << ' ';
      }
   }
   return 0;
}