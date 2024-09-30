#include <stdio.h>

int Eregular (int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    while (n % 2 == 0)
    {
        n/= 2;
    }

    while (n % 3 == 0)
    {
        n/= 3;
    }
    
    while (n % 5 == 0)
    {
        n/= 5;
    }
    
    return ( n == 1);
}


int main ()
{
    int Num;

    printf("Digite um número: ");
    scanf("%d", &Num);

    if (Eregular(Num))
    {
        printf("%d é um número regular\n", Num);
    }
    else
    {
        printf("%d Não é um número regular\n", Num);
    }    
}