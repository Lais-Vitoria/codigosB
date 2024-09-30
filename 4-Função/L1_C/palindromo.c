#include <stdio.h>
#include <string.h>

int eh_palindromo(char texto[]) {
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
