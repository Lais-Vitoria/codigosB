#include <stdio.h>

int main ()
{
    char Nomes[4][99];
// Entrada e armazenamento dos 10 Nomes.
    for (int i = 0; i < 4; i++)
    {
        printf("\nEntre com o %d Nome: ", i + 1);
        scanf(" %[^\n]", Nomes[i]);
    }

// Lista dos nomes.
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d - %s", i + 1, Nomes[i]);
    }

    return 0;
    
}