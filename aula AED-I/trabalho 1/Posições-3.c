#include <stdio.h>

#define TAMANHO_VETOR 6

int main()
{
    int vetor[TAMANHO_VETOR];
    int i;

    // Lê os dados do vetor
    printf("Digite %d números inteiros:\n", TAMANHO_VETOR);
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Troca elementos em posições ímpares com posições pares anteriores
    for (i = 1; i < TAMANHO_VETOR; i += 2)
    {
        // Troca o elemento na posição ímpar (i) com o elemento na posição par anterior (i-1)
        int temp = vetor[i];
        vetor[i] = vetor[i - 1];
        vetor[i - 1] = temp;
    }

    // Exibe o vetor após a troca
    printf("Vetor após a troca:\n");
    for (i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}