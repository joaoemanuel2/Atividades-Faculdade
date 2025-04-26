#include <stdio.h>
#include <math.h>

int main()
{
    int A[8][8];
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

    printf("Matriz A (8x8):\n");
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
