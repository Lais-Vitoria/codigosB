#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float Numero;
    for (int i = 1; i <=4; i++)
    {
        printf("\n\nDigite um número: ");
        scanf("%f", &Numero);
        printf("\nO cubo: %2.2f", Numero * Numero * Numero);
        printf("\nRaiz cubica: %.2f", cbrt(Numero));

    }
    
}