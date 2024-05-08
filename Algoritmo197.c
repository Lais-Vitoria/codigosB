#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Num, Soma = 0;

    printf("\nDigite Um numero maior que zero: ");
    scanf("%d", &Num);
    Num = Num + Num;
    for (int i = 1; i <= Num; i++)
    {
        if (i%2 != 0)
        {
            Soma = Soma + i;
        }
        
    }
    printf("\n%d", Soma); 
}