#include <stdio.h>
#include <math.h>

int main ()
{
    float Numero;
    for (int i = 1; i <= 15; i++)
    {
        printf("\n\nEntre com um numero: ");
        scanf("%f", &Numero);
        printf("\nA Raiz Quadrada: %.2f", sqrt(Numero));
    }

}

//Obersevação a entrada dos numeros tem que ser com ponto ex: 2.5