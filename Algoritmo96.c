#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero, Resto;

    printf("\nEntre com um n�mero: ");
    scanf("%d", &Numero);

    Resto = Numero%21;

    if(Resto == 0)
    {
        printf("\n O Numero %d e Divisivel por 3 e 7.", Numero);
    }
    else
    {
        printf("\n O N�mero %d N�o e divisivel por 3 e 7.", Numero);
    }
}