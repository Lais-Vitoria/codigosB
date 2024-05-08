#include <stdio.H>

int main()
{
     int I , Produto;
    printf("\nOs multiplos de 5 no intervalo de 1 ate 500 sao: ");
    
    Produto = 0;
    for ( I = 1; Produto < 500 ; I++)
    {
        Produto = 5 * I ;
        printf("\n%d", Produto);
    }
}

#include <stdio.H>

int main()
{
     int I , Produto;
    printf("\nOs multiplos de 5 no intervalo de 1 ate 500 sao: ");
    I = 0;
    Produto = 0;
    while ( Produto < 500 )
    {
        I = I + 1;
        Produto = 5 * I ;
        printf("\n%d", Produto);
    }
}