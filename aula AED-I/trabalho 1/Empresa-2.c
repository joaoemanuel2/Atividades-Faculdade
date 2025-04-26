#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct
{
    char nome[50];
    char telefone[15];
    int data_nascimento[3];
} Funcionario;

int main()
{
    Funcionario funcionarios[2];
    int mes, i;
    SetConsoleOutputCP(CP_UTF8);

    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do funcionario %d: ", i + 1);
        scanf("%s", funcionarios[i].nome);
        printf("Digite o telefone do funcionario %d: ", i + 1);
        scanf("%s", funcionarios[i].telefone);
        printf("Digite a data de nascimento do funcionario %d (dia mês ano): ", i + 1);
        scanf("%d %d %d", &funcionarios[i].data_nascimento[0], &funcionarios[i].data_nascimento[1], &funcionarios[i].data_nascimento[2]);
    }
    
    printf("Digite o mês (1 a 12): ");
    scanf("%d", &mes);

    printf("Aniversariantes do mês %d:\n", mes);
    for (i = 0; i < 2; i++)
    {
        if (funcionarios[i].data_nascimento[1] == mes)
        {
            printf("Nome: %s\n", funcionarios[i].nome);
            printf("Telefone:\n %s", funcionarios[i].telefone);
            printf("Dia: %d", funcionarios[i].data_nascimento[0]);
        }
    }
    return 0;
}