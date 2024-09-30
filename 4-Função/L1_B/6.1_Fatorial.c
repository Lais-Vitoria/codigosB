#include <stdio.h>

float Fatorial (int Num)
{
    float fat=Num;

    for (int i = 1; i < Num; i++)
    {
        fat = fat * (Num-i);
    }
    
    return fat;
}

int main ()
{
    int Numero;

    printf("\nEntre com um numero: ");
    scanf("%d", & Numero);

    printf("\nO fatorial do número %d é: %.2f", Numero, Fatorial(Numero));

}