#ifndef EH_PALINDROMO_H
#define EH_PALINDROMO_H
#include <string.h>


int ehpalindromo(char texto[]) 
{
    int esquerda = 0;
    int direita = strlen(texto) - 1;

    while (esquerda < direita) {
        esquerda++;
         direita--;

        if (texto[esquerda] != texto[direita]) {
            return 0;
        }
        esquerda++;
        direita--;
    }
    return 1;
}

#endif