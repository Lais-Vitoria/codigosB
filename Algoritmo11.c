// Algoritmo 38 do livro introdu��o a Progama��o
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float Num, TercaParte;

    printf("\nDigite um n�mero: ");
    scanf("%f",&Num);
    
    TercaParte = Num / 3;

    printf("\nA Ter�a parte e: %0.2f", TercaParte);
// Para ler um n�mero real com ponto e virgula, tem que ler como string e depois transformar em numero,pesquisar sobre tabela ASCII

}