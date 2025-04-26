#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    int matriz[5][5];
    int soma_diagonal = 0;
    int i, j;
    SetConsoleOutputCP(CP_UTF8); // Codigo para acentuação
    printf("Preencha a matriz 5x5 com números inteiros:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        soma_diagonal += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é: %d\n", soma_diagonal);

    return 0;
}