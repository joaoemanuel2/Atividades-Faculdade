#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int matriz[6][6] = {
        {1, 20, 30, 40, 32, 50},
        {1, 1, 8, 9, 12, 10},
        {1, 1, 1, 14, 15, 15},
        {1, 1, 1, 1, 18, 20},
        {1, 1, 1, 1, 1, 20},
        {1, 1, 1, 1, 1, 1}};
    int soma = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            soma += matriz[i][j];
        }
    }
    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);

    return 0;
}
