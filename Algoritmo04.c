//Algoritmo 31 do livro introdu��o a progama��o
#include <stdio.h>
#include <locale.h>

int main ()
{
    float Media;
    Media = (8 + 9 + 7) / 3;
    setlocale(LC_ALL, "Portuguese");
    printf("\nA M�dia aritm�tica de 8, 9 e 7 e: %.1f", Media);
}