#include <stdio.h>

int main ()
{
    char Nome[10][30];

    for (int i = 0; i < 10; i++)
    {//Entrada de 10 nomes.
        printf("\nDigite o %d Nome: ", i +1);
        scanf(" %[^\n]", Nome[i]);
    }
    printf("\n\nLista de nomes\n");
    for (int i = 0; i < 10; i++)
    {// imprime os nomes em ordem númerica de 1 á 10.
        printf("\n%d - %s", i+1, Nome[i]);
    }
}