#include <stdio.h>
#include <string.h>

int main ()
{
    char Nome[50], Ultimo;

    printf("\nDigite um nome Completo:\n");
    scanf("%[^\n]", Nome);

    printf("Nome Completo: %s", Nome);
    printf("\nPrimeiro Caracter: %c", Nome[0]);
    Ultimo = strlen(Nome);
    if (Ultimo > 0)
    {
        printf("\nUltimo caracter: %c", Nome[Ultimo - 1]);
    }
    printf("\nDo Primeiro ao terceiro caracter: %c%c%c", Nome[0], Nome[1], Nome[2]);
    printf("\nQuarto caracter: %c", Nome[3]);
    if (Ultimo > 1)
    {
        printf("\ntodos menos o primeiro: %s", Nome + 1);
    }
    printf("\nOs dois últimos: %c%c\n", Nome[Ultimo - 2], Nome[Ultimo - 1]);
}