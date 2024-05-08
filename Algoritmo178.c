#include <stdio.h>
#include <math.h>

int main ()
{
    int Quadrado;

    for ( int I = 1; I <=20; I++)
    {
        Quadrado = I*I;
        printf("\nQuadrado do numero %d e %d", I, Quadrado);
    }
}