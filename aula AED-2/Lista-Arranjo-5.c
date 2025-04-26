#include <stdio.h>

int main()
{
    // Perguntas a serem feitas
    const char *perguntas[] = {
        "Telefonou para a vítima? (s/n): ",
        "Esteve no local do crime? (s/n): ",
        "Mora perto da vítima? (s/n): ",
        "Deveria para a vítima? (s/n): ",
        "Já trabalhou com a vítima? (s/n): "};

    int respostas_positivas = 0; // Contador de respostas positivas
    char resposta;               // Variável para armazenar a resposta do usuário

    // Fazendo as perguntas
    for (int i = 0; i < 5; i++)
    {
        printf("%s", perguntas[i]);
        scanf(" %c", &resposta); // Lê a resposta

        // Verifica a resposta
        if (resposta == 's' || resposta == 'S')
        {
            respostas_positivas++; // Incrementa se a resposta for sim
        }
        else if (resposta != 'n' && resposta != 'N')
        {
            printf("Resposta inválida. Responda com 's' ou 'n'.\n");
            i--; // Repete a pergunta se a resposta for inválida
        }
    }

    // Emitindo a classificação
    printf("\nClassificação:\n");
    if (respostas_positivas == 0)
    {
        printf("Inocente\n");
    }
    else if (respostas_positivas == 2)
    {
        printf("Suspeita\n");
    }
    else if (respostas_positivas >= 3 && respostas_positivas <= 4)
    {
        printf("Cúmplice\n");
    }
    else if (respostas_positivas == 5)
    {
        printf("Assassino\n");
    }

    return 0;
}