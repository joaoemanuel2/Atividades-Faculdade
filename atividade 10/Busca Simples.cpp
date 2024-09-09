#include <iostream>
using namespace std;

int main()
{

    int N[9], X,N2 = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> N[i];
    }
     cin >> X;
    for (int i = 0; i < 10; i++)
    {
      if (X == N[i])
      {
           N2++;
      }
    }
     if (N2 == 0)
     {
        cout << "NAO";
     }else{
        cout << "SIM";
     }
     
    
    return 0;
}