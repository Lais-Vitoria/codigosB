#include <stdio.h>
#include <math.h>

int main ()
{
    float Numero;

    for (int i = 1; i <= 8; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%f", &Numero);
        printf("\nLog10:  %.2f", log(Numero)/log(10));
    }
    
}