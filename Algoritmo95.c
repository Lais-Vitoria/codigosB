#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero, Resto;

    printf("\nEntre com um n�mero: ");
    scanf("%d", &Numero);

    Resto = Numero % 5;

    if(Resto == 0)
    {
        printf("\nO N�mero %d e Multiplo de 5", Numero);
    }
    else
    {
        printf("\nO N�mero %d N�o e Multiplo de 5", Numero);
    }

}