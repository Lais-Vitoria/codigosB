// Agoritmo 41 do livro introdu��o a progama��o
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");

    float Num1 , Num2 , Num3, Num4, MediaPonderada;

    printf("\nDigite um n�mero: ");
    scanf("%f",&Num1);

    printf("\nDigite o segundo n�mero: ");
    scanf("%f",&Num2);

    printf("\nDigite o terceiro n�mero: ");
    scanf("%f",&Num3);

    printf("\nDigite o Quarto n�mero: ");
    scanf("%f",&Num4);

    MediaPonderada =(Num1*1 + Num2*2 + Num3*3 + Num4*4) / (1 + 2 + 3 + 4);

    printf("\nA M�dia ponderada e: %.2f", MediaPonderada);
}