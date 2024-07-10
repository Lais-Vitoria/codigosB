#include <stdio.h>
#include <math.h>

int main ()
{
    float Base, Altura, D;

    printf("\nEntre com a base do retângulo: ");
    scanf("%f", &Base);

    printf("\nEntre com a Altura do retângulo: ");
    scanf("%f", &Altura);

    printf("\nÁrea: %.2f", Base * Altura);
    printf("\nPerímetro: %.2f", 2 * (Base + Altura));
    printf("\nDiagonal: %.2f", sqrt(Base * Base + Altura * Altura));

    return 0;
}