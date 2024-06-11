#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    printf("\n----------------------------------------");
    printf("\nTABELA DE CONVERSÃO POLEGADAS -> CM");
    printf("\n----------------------------------------");

    for (int i = 1; i <= 20; i++)
    {
        float J = 2.54;
        int Produto =  J * i;
        printf("\n........................................");
        printf("\n %d Polegada equivale %d Centimetros", i, Produto);
        printf("\n........................................");
    }
    
}