#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero, Quadrado;

    Quadrado = 2;

    printf("\nEntre com um n�mero: ");
    scanf("%d", &Numero);

    printf("\nN�mero: %d", Numero);
    printf("\nQuadrado: %d", Quadrado);
    printf("\nRaiz Quadrada: %1.f", sqrt(Numero));

}