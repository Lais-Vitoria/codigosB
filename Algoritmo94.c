#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero, Resto;

    printf("\nEntre com um n�mero: ");
    scanf("%d", &Numero);

    Resto = Numero % 3;

    if(Resto == 0)
    {
        printf("\nO N�mero %d e Multiplo de 3", Numero);
    }
    else
    {
        printf("\nO N�mero %d n�o e multiplo de 3", Numero);
    }
}