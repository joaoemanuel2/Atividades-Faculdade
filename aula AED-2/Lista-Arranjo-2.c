#include <stdio.h>

int main()
{
    int notas[100];     // Array para armazenar as notas (limite de 100 notas)
    int quantidade = 0; // Contador de notas
    int nota;

    // Leitura das notas
    while (1)
    {
        printf("Informe uma nota (ou -1 para encerrar): ");
        scanf("%d", &nota);

        if (nota == -1)
        {
            break; // Encerra a entrada de dados
        }

        if (quantidade < 100)
        { // Verifica se ainda tem espaço no array
            notas[quantidade] = nota;
            quantidade++; // Incrementa a quantidade de notas lidas
        }
        else
        {
            printf("Limite de notas atingido.\n");
            break; // Encerra caso o limite de notas seja atingido
        }
    }

    // a. Mostrar a quantidade de valores lidos
    printf("A quantidade de valores lidos: %d\n", quantidade);

    // b. Exibir todos os valores na ordem que foram informados
    printf("Valores informados na ordem: ");
    for (int i = 0; i < quantidade; i++)
    {
        printf("%d ", notas[i]);
    }
    printf("\n");

    // c. Exibir todos os valores na ordem inversa
    printf("Valores informados na ordem inversa:\n");
    for (int i = quantidade - 1; i >= 0; i--)
    {
        printf("%d\n", notas[i]);
    }

    // d. Calcular e mostrar a média dos valores
    if (quantidade > 0)
    {
        int soma = 0;
        for (int i = 0; i < quantidade; i++)
        {
            soma += notas[i];
        }
        float media = (float)soma / quantidade; // Cálculo da média
        printf("Média dos valores: %.2f\n", media);

        // e. Calcular e mostrar a quantidade de valores acima da média
        int acima_da_media = 0;
        for (int i = 0; i < quantidade; i++)
        {
            if (notas[i] > media)
            {
                acima_da_media++;
            }
        }
        printf("Quantidade de valores acima da média: %d\n", acima_da_media);
    }
    else
    {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}