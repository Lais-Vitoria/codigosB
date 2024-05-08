#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");

    int NumSuperior, Incremento;

    printf("\nDigite o Número maximo do intervalo: ");
    scanf("%d", &NumSuperior);

    printf("\nEntre com o valor do incremento: ");
    scanf("%d", &Incremento);   

    for (int i = 0; i <= NumSuperior; i= i + Incremento)
    {
        printf(" %d", i);
    }
    
}