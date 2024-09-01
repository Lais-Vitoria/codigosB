#include <stdio.h>
#include <math.h>

float Volume_Esfera ( float Pi, float Raio)
{
    return (4 * Pi / 3) * pow(Raio, 3);
}

int main ()
{
    float Raio, Volume;
    const float Pi = 3.1415;

    printf("\nDigite o valor do raio: ");
    scanf("%f", &Raio);

    Volume = Volume_Esfera (Pi,Raio);
    printf("\nO volume da esfera é: %.2f", Volume);   

    return 0;

}