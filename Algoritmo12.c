#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");

    float Num1, Num2, Media;

    printf("\nDigite um n�mero com virgula: ");
    scanf("%f",&Num1);

    printf("\nDigite outro n�mero com virgula: ");
    scanf("%f",&Num2);

    Media = (Num1 + Num2)/2;

    printf("\nM�dia: %0.2f", Media); 
}