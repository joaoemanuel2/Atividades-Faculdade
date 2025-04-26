#include <stdio.h>
#include <locale.h>

int main()
{
  int matriz[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};
  int i, j;
  int soma1 = 0, soma2 = 0, soma3 = 0;

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      soma1 = matriz[0][0] + matriz[1][0] + matriz[2][0];
      soma2 = matriz[0][0] * matriz[0][1] * matriz[0][2];
      soma3 += matriz[i][j];
    }
  }
  printf("Soma da 1 coluna: %d\n", soma1);
  printf("O produto dos elementos da 1 linha: %d\n", soma2);
  printf("A soma de todos os elementos da matriz: %d\n", soma3);
  printf("A media dos elementos da matriz e: %d\n", (soma3 / 9));

  return 0;
}