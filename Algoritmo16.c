#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float Numero;

    printf("\nDigite um n�mero: ");
    scanf("%f",&Numero);

    printf("\nO Logatimo do n�mero na base 10: %.2f", log(Numero) / log(10));

}
