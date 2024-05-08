#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero;

    printf("\nEntre com um número inteiro: ");
    scanf("%d", &Numero);

    if(Numero > 20)
    {
        printf("\nO número: %d é maior que 20!", Numero);
    }
}