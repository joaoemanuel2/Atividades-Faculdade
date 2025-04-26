#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8); // código acentuação

    char Nome_Hospede[100];
    int Apto;
    int Taxa_S;
    float Diaria, Consumo;
    float Total_D, Subtotal, Total, Valor_Unitario;
    float Apto_1 = 150.00,
          Apto_2 = 100.00,
          Apto_3 = 75.00,
          Apto_4 = 50.00;
    printf("Digite o seu nome:");
    fgets(Nome_Hospede, sizeof(Nome_Hospede), stdin);

    printf("Quanto tempo de diária:");
    scanf("%f", &Diaria);

    fflush(stdin);

    printf("Consumo:");
    scanf("%f", &Consumo);

    fflush(stdin);

    printf("Qual apartamento:");
    scanf("%d", &Apto);
    switch (Apto)
    {
    case 1:
        Total_D = Apto_1 * Diaria;
        Valor_Unitario = Apto_1;
        break;
    case 2:
        Total_D = Apto_2 * Diaria;
        Valor_Unitario = Apto_2;
        break;
    case 3:
        Total_D = Apto_3 * Diaria;

        Valor_Unitario = Apto_3;
        break;
    case 4:
        Total_D = Apto_4 * Diaria;
        Subtotal = Total_D + Consumo;

        Valor_Unitario = Apto_4;
        break;
    default:
        printf("Você digitou um numero invalido.");
        return 1;
    }
    Subtotal = Total_D + Consumo;
    Taxa_S = Subtotal * 0.10;
    Total = Subtotal + Taxa_S;

    printf("\n");
    printf("    Conta final   \n");
    printf("Nome:%s", Nome_Hospede);
    printf("Apartamento: %d\n", Apto);
    printf("Diárias: %2.f\n", Diaria);
    printf("Valor unitário da diária: %.2f\n", Valor_Unitario);
    printf("Total diária:  %2.f\n", Total_D);
    printf("Valor de consumo: %2.f\n", Consumo);
    printf("Soma diárias e consumo: %2.f\n", Subtotal);
    printf("Valor da taxa de serviço: %d\n", Taxa_S);
    printf("Total:%2.f", Total);
}