#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float Numero;

    printf("\nEntre com um numero: ");
    scanf("%f", &Numero);

    if(Numero > 0)
    {
        printf("\nRaiz Quadrada do n�mero: %.2f e %.2f", Numero, sqrt(Numero));
    }
    else
    {
        printf("\nO Quadrado do n�mero %.2f e %.2f", Numero, Numero * Numero);
    }
}