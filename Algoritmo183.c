#include <stdio.h>

int main ()
{
    int Numero;

    for (int i = 0; i <= 10; i++)
    {
        printf("\nEntre com um numero: ");
        scanf("%d", &Numero);
        printf("\nO Quadrado do Numero: %d", Numero * Numero);
        printf("\n");
    }
    
}