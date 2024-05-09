#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero1, Numero2, Soma;

    printf("\nEntre com o primeiro número: ");
    scanf("%d", &Numero1);

    printf("\nEntre com o segundo número: ");
    scanf("%d", &Numero2);

    Soma = Numero1 + Numero2;

    if(Soma > 20)
    {
        printf("\nSoma: %d", Soma + 8);
    }
    else
    {
        printf("\nSoma: %d", Soma - 5);
    }
}
