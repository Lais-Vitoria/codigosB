#include <stdio.h>
#include <locale.h>

int main ()
{
    int Num1, Num2;
    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite um número inteiro: \n");
    scanf("%d",&Num1);
    printf("\nDigite outro número inteiro: \n");
    scanf("%d",&Num2);
}
