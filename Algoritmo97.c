#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero, Resto10, Resto5, Resto2;

    printf("\nEntre com um n�mero: ");
    scanf("%d", &Numero);

    Resto10 = Numero % 10;
    Resto5 = Numero % 5;
    Resto2 = Numero % 2;

    if(Resto10 == 0)
    {
        printf("\nN�mero %d e divis�vel por 10.", Numero);
    }
    else
    {
        if(Resto5 == 0)
        {
            printf("N�mero %d e divis�vel por 5", Numero);
        }
        else
        {
            if(Resto2 == 0)
            {
                printf("\nN�mero %d e divis�vel por 2", Numero);
            }
            else
            {
                printf("\nO N�mero %d N�o e divisivel por 10, por 5 e por2.", Numero);
            }
        }
        
    }
}