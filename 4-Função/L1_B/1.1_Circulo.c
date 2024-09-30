#include <stdio.h>

float Area_Circulo ( float Pi, float R)
{
    float Area;

    Area = (Pi * ( R * R));

    return Area;
}

int main ()
{
    float Raio, Area;
    const float Pi = 3.1415;

    printf("\nDigite qual e o valor do raio: ");
    scanf("%f", &Raio);

    Area = Area_Circulo ( Pi, Raio);
    printf("\nA Área do circulo é: %.2f", Area);

    return 0;

}