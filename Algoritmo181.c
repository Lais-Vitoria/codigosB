#include <stdio.h>

int main()
{
    int Soma = 0;

    for ( int i = 1 ; i <= 100; i++)
    {
        printf("\n%d", i);
        Soma = Soma + i;
    }
    printf("\nSoma; %d", Soma);

}
