#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float Numero, Baselog;

    printf("\nEntre com um número: ");
    scanf("%f", &Numero);

    printf("\nEntre com o número da base: ");
    scanf("%f", &Baselog);

    printf("\nO logarito do número: %1.f na base: %1.f é: %.2f", Numero, Baselog, log(Numero) / log(Baselog));

}