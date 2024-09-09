#include <iostream>
using namespace std;

int main()
{
  int N[11];
  int X, N2 = 0;

  for (int i = 0; i < 10; i++)
  {
    cin >> N[i];
  }
  cin >> X;
  for (int i = 0; i < 10; i++)
  {
    if (N[i] == X)
    {
      N2++;
    }
  }
  if (N2 > 0)
  {
    cout << N2 << endl;
    for (int i = 0; i < 10; i++)
    {
      if (N[i] == X)
      {
        cout << i << ' ';
      }
    }
  }
  else
  {
    cout << "Mia x" << endl;
  }
  return 0;
}