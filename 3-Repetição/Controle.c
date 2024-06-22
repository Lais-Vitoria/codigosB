#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Num;

    printf("\nEntre com um numero: ");
    scanf("%d", &Num);

    for (int i = 1; i <= Num; i++)
    {
        printf(" %d", i);
        if (i == Num)
        {
            printf("\n   %d", Num * (i-1));
        }
    }
    
}