#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int matriz[8][8] = {
        {2, 1, 1, 1, 1, 1, 1, 1},
        {2, 2, 1, 1, 1, 1, 1, 1},
        {2, 2, 2, 1, 1, 1, 1, 1},
        {2, 2, 2, 2, 1, 1, 1, 1},
        {2, 2, 2, 2, 2, 1, 1, 1},
        {2, 2, 2, 2, 2, 2, 1, 1},
        {2, 2, 2, 2, 2, 2, 2, 1},
        {2, 2, 2, 2, 2, 2, 2, 2}};
    int soma = 0;
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 8; j++)
        {
            soma += matriz[i][j];
        }
    }
    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);

    return 0;
}
