#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero, Resto;

    printf("\nEntre com um número: ");
    scanf("%d", &Numero);

    Resto = Numero % 3;

    if(Resto == 0)
    {
        printf("\nO Número %d e Multiplo de 3", Numero);
    }
    else
    {
        printf("\nO Número %d não e multiplo de 3", Numero);
    }
}
