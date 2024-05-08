#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Limite;

    printf("\nDigite o limite: ");
    scanf("%d", &Limite);

    for (int i = 1; i < Limite; i++)
    {
        if (i%2 == 1)
        {
            printf(" %d",i);
        }
        
    }
    
}