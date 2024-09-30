#include <stdio.h>

int Primo (int Num)
{
    if(Num == 2 || Num%2 != 0)
    {
        printf("\nO número %d é primo!", Num);
    }
    else
        printf("\nO número %d não e primo!", Num);
} 

int main()
{
    int  Numero;

    printf("\nEntre com um número: ");
    scanf("%d", &Numero);

    Primo(Numero);
}