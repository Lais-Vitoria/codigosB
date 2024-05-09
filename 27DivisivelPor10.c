#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero, Resto10, Resto5, Resto2;

    printf("\nEntre com um número: ");
    scanf("%d", &Numero);

    Resto10 = Numero % 10;
    Resto5 = Numero % 5;
    Resto2 = Numero % 2;

    if(Resto10 == 0)
    {
        printf("\nNúmero %d e divisível por 10.", Numero);
    }
    else
    {
        if(Resto5 == 0)
        {
            printf("Número %d e divisível por 5", Numero);
        }
        else
        {
            if(Resto2 == 0)
            {
                printf("\nNúmero %d e divisível por 2", Numero);
            }
            else
            {
                printf("\nO Número %d Não e divisível por 10, por 5 e por2.", Numero);
            }
        }
        
    }
}
