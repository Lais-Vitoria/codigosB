#include <stdio.h>
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Num1, Num2, Soma;

    printf("\nEscreva um n�mero inteiro: ");
    scanf("%d", &Num1);
    printf("\nEscreva outro n�mero inteiro: ");
    scanf("%d", &Num2);
     
    Soma = Num1 + Num2;

    printf("\nSoma: %d", Soma);
}