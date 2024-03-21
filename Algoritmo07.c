//Algoritimo 34 do livro introdução á progamação
#include <stdio.h>
#include <locale.h>

int main()
{
    int Numero;
    setlocale(LC_ALL,"Portuguese");
    printf("\nEscreva um número inteiro: \n");
    scanf("%d",&Numero);
    printf("\nO Número: %d Tem o sucessor: %d \nE o antecessor: %d", Numero, Numero+1, Numero-1);
}