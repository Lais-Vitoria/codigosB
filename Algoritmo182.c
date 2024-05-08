#include <stdio.h>

int main ()
{
    float Numero;
    
    for (int i = 0; i <= 10; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%f", &Numero);
        printf("\nA medade do numero %.1f e: %.1f",Numero, Numero / 2);
        printf("\n");
    }
    
}