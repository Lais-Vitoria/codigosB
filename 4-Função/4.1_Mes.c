#include <stdio.h>

int N_mes (int n)
{
    switch (n)
    {
        case 1:
            printf("Janeiro\n");
        break;
        case 2:
            printf("\nFevereiro\n");
        break;
        case 3:
            printf("Março\n");
        break;
        case 4:
            printf("Abril\n");
        break;
        case 5:
            printf("Maio\n");
        break;
        case 6:
            printf("Junho\n");
        break;
        case 7:
            printf("Julho\n");
        break;
        case 8:
            printf("Agosto\n");
        break;
        case 9:
            printf("Setembro\n");
        break;
        case 10:
            printf("Outubro\n");
        break;
        case 11:
            printf("Novembro\n");
        break;
        case 12:
            printf("Dezenbro\n");
        break;
    default:
        printf("Não existe um mês com esse número\n");
        break;
    }

}

int main ()
{
    int Mes, NomeMes;

    printf("\nDigite um número do mês: ");
    scanf("%d", &Mes);

    printf("\nO Número %d é do mês de: ", Mes);
    N_mes(Mes);

}
