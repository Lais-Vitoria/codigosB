#include <stdio.h>
#include "letra.h"


int main ()
{
    char Letra;
    int resultado;

    printf("\nEntre com um caractere: ");
    scanf(" %c", &Letra);

     resultado = ehconsoante(Letra);

     printf(" Se resultado for 1 e consoante caso contrario será 0: %d\n", resultado);
    return 0;
}
