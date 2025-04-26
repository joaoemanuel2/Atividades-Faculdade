#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int matriz_A[3][5] = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1}};

    int matriz_B[3][5] = {
        {2, 2, 2, 2, 2},
        {2, 2, 2, 2, 2},
        {2, 2, 2, 2, 2}};
    int matriz_C[3][5];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz_C[i][j] = matriz_A[i][j] + matriz_B[i][j];
        }
    }
    printf("A soma da matriz A com B é:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%5d", matriz_C[i][j]);
        }
        printf("\n");
    }

    return 0;
}