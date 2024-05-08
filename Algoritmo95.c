#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero, Resto;

    printf("\nEntre com um número: ");
    scanf("%d", &Numero);

    Resto = Numero % 5;

    if(Resto == 0)
    {
        printf("\nO Número %d e Multiplo de 5", Numero);
    }
    else
    {
        printf("\nO Número %d Não e Multiplo de 5", Numero);
    }

}