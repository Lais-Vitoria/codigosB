#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float Numero, Baselog;

    printf("\nEntre com um n�mero: ");
    scanf("%f", &Numero);

    printf("\nEntre com o n�mero da base: ");
    scanf("%f", &Baselog);

    printf("\nO logarito do n�mero: %1.f na base: %1.f �: %.2f", Numero, Baselog, log(Numero) / log(Baselog));

}