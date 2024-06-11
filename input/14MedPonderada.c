#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");

    float Num1 , Num2 , Num3, Num4, MediaPonderada;

    printf("\nDigite um número: ");
    scanf("%f",&Num1);

    printf("\nDigite o segundo número: ");
    scanf("%f",&Num2);

    printf("\nDigite o terceiro número: ");
    scanf("%f",&Num3);

    printf("\nDigite o Quarto número: ");
    scanf("%f",&Num4);

    MediaPonderada =(Num1*1 + Num2*2 + Num3*3 + Num4*4) / (1 + 2 + 3 + 4);

    printf("\nA Média ponderada e: %.2f", MediaPonderada);
}
