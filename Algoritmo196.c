#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int Num, Soma = 0;

    printf("\nDigite um Número: ");
    scanf("%d", &Num);
    Num = Num -1;
    for (int i =  5; i < Num; i= i + 5)
    {
       Soma = Soma + i;
    }
    printf("\n%d", Soma);
}