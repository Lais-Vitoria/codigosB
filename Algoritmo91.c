#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Numero1, Numero2, Adicao;

    printf("\nDigite o primero Numero: ");
    scanf("%d", &Numero1);

    printf("\nDigite o segundo Numero: ");
    scanf("%d", &Numero2);

    Adicao = Numero1 + Numero2;

    if(Adicao > 10)
    {
        printf("\nA Adição dos números e: %d", Adicao);
    }


    
}