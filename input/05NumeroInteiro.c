#include <stdio.h>
#include <locale.h>

int main ()
{
    int Numero;
    setlocale(LC_ALL,"Portuguese");
    printf("\nDigite um número inteiro: \n");
    scanf("%d",&Numero);
}
