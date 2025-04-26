#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int m[3][3], i, j;

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {

            printf("Digite o numero da linha %d e coluna %d:\n", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
             printf ("%d    ",m[i][j]);
        }
    }

    return 0;
}
