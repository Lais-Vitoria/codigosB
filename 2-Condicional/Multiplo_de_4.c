#include <stdio.h>

int main ()
{
    int Numero, milhar, Centena;

    printf("\nDigite um número de 4 casas decimais: ");
    scanf("%d", &Numero);

    // valida a entrada para que o numero não seja maior que 4 casas decimais.
    if( Numero <= 9999)
    {
        Numero = Numero / 100;
        // verifica se o numero formado pelos algarismo nas casas de milhar e centena e multiplo de 4.
        if (Numero%4 == 0)
        {
            printf("\n%d É multiplo de quatro", Numero);
        }
        else
        {
            printf("\n%d Não é multiplo de quatro", Numero);
        }
        
    }
    else
    {
        printf("\nNúmero maior que 4 casa decimais");
    }
}