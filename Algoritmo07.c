#include <stdio.h>
#include <locale.h>

int main()
{
    int Numero;
    setlocale(LC_ALL,"Portuguese");
    printf("\nEscreva um n�mero inteiro: \n");
    scanf("%d",&Numero);
    printf("\nO N�mero: %d Tem o sucessor: %d \nE o antecessor: %d", Numero, Numero+1, Numero-1);
}