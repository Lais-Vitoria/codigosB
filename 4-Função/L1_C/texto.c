#include <stdio.h>
#include "palindromo.h"

int main ()
{
    char string[50];

    printf("Entre com uma string: ");
    scanf("%s", string);

    if (ehpalindromo(string) == 1)
    {
        printf("E palindromo\n");
    }
    else
        printf("não e palindromo\n");
    
    return 0;
}