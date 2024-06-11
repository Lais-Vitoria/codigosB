#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    char Nome[99];
    int Idade, Sexo;

    for (int i = 1; i <= 20; i++)
    {
        printf("\nDigite seu Nome: ");
        scanf(" %99[^\n]", Nome);

        printf("\nQual a sua idade: ");
        scanf(" %d", &Idade);

        printf("\nEntre com 1 P/Masc ou 2 P/Femin: ");
        scanf(" %d", &Sexo);

        if (Sexo == 1 && Idade >= 21)
        {
            printf("\n\nMasc Maior de idade %s", Nome);
        }

    }
    
}