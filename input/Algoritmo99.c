#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int Numero, Centena;

    printf("\nDigite um n�mero com tr�s casas decimais ex:123: ");
    scanf("%d", &Numero);

    Centena = Numero / 100;

    if(Centena % 2 == 0)
    {
        printf("\nO Algarismo da centena %d � Par", Centena);
    }
    else
    {
        printf("\nO Algarismo da centena %d � impar", Centena);
    }




}