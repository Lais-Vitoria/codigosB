#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int NumSuperior, NumInferio, Decremento, Conversao;

    printf("\nTabela de convers�o celsius-fahrenheit");
    
    printf("\n\nDigite um n�mero maior em fahrenheit: ");
    scanf("%d", &NumSuperior);

    printf("\nDigite um n�mero menor em fahrenheit: ");
    scanf("%d", &NumInferio);

    printf("\nEntre com o decremento: ");
    scanf("%d", &Decremento);
    printf("\nFahrenheit     Celsius");

    for ( int i = NumSuperior; i >= NumInferio; i= i - Decremento)
    {
        Conversao= 5 *(i - 32) / 9;
        printf("\n\n   %d            %d", i, Conversao);
    }
    
}
