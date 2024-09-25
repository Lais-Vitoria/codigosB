#include <stdio.h>
#include "vogal.h"

int main()
{
    char Vogal;
    int resultado;

    printf("Digite um caracter: ");
    scanf(" %c", &Vogal);

    resultado = EhMinuscula(Vogal);

    printf("\nSe resultado for 1 é uma vogal minuscula caso contrario será 0: %d", resultado);
}