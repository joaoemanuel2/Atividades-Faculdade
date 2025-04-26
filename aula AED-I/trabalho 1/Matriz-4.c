#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int vetor[3];
    int matriz[3][3];
    int resultado[3][3];

    printf("Digite os elementos do vetor de %d elementos:\n", 3);
    for (int i = 0; i < 3; i++)
    {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite os elementos da matriz %dx%d:\n", 3, 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            resultado[i][j] = vetor[j] * matriz[i][j];
        }
    }

    printf("Resultado da multiplicação do vetor pela matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}