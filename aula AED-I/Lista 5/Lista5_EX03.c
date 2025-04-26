#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

int main()
{
    int A[8][8];
    int soma_diagonal = 0,
        soma_segundaria = 0;
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (i + j == 8)
            {
                A[i][j] = pow(i, 2) + pow(j, 2) + 2;
            }
            else if (i + j > 8)
            {
                A[i][j] = j + 4;
            }
            else
            {
                A[i][j] = 3 * i + j;
            }
        }
    }

    for (i = 0; i < 8; i++)
    {
        soma_diagonal += A[i][i];
    }
    for (i = 0; i < 8; i++)
    {
        soma_segundaria += A[i][8 - 1 - i];
    }

    SetConsoleOutputCP(CP_UTF8); // Codigo para acentuação
    printf("A soma dos elementos da diagonal principal é: %d\n", soma_diagonal);
    printf("A soma dos elementos da diagonal segundária é: %d\n", soma_segundaria);
    printf("A multiplicação da soma da diagonal principal e segundária é: %d\n", soma_diagonal * soma_segundaria);

    return 0;
}