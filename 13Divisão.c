#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Num1, Num2, Divisao, Resto;
// O Primeiro número e o Dividendo
    printf("\nEntre com um número inteiro: ");
    scanf("%d",&Num1);
// O segundo número e o Divisor
    printf("\nEntre com o segunndo número inteiro: ");
    scanf("%d",&Num2);
// Divisao e o Quociente
    Divisao = Num1 / Num2;
// Resto da Divisão
    Resto = Num1 % Num2;

    printf("\nDividendo: %d", Num1);
    printf("\nDivisor: %d", Num2);
    printf("\nQuociente: %d", Divisao);
    printf("\nResto: %d", Resto);
}

