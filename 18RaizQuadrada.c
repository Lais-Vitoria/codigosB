#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero, Quadrado;

    Quadrado = 2;

    printf("\nEntre com um número: ");
    scanf("%d", &Numero);

    printf("\nNúmero: %d", Numero);
    printf("\nQuadrado: %d", Quadrado);
    printf("\nRaiz Quadrada: %1.f", sqrt(Numero));

}