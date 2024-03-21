// Algoritmo 38 do livro introdução a Progamação
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float Num, TercaParte;

    printf("\nDigite um número: ");
    scanf("%f",&Num);
    
    TercaParte = Num / 3;

    printf("\nA Terça parte e: %0.2f", TercaParte);
// Para ler um número real com ponto e virgula, tem que ler como string e depois transformar em numero,pesquisar sobre tabela ASCII

}