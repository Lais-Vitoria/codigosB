#include <stdio.h>
#include <locale.h>

int main ()
{
    int Num1, Num2;
    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite um n�mero inteiro: \n");
    scanf("%d",&Num1);
    printf("\nDigite outro n�mero inteiro: \n");
    scanf("%d",&Num2);
}