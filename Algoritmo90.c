#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero;

    printf("\nEntre com um n�mero inteiro: ");
    scanf("%d", &Numero);

    if(Numero > 20)
    {
        printf("\nO n�mero: %d � maior que 20!", Numero);
    }
}