#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char Nomes[5][30],Aux[30];
    //Leitura dos nomes.
    for (int i = 0; i < 5; i++)
    {
        printf("%d-Nome: ", i+1);
        scanf(" %[^\n]", Nomes[i]);
    }
    //Ordenacao em ordem alfabetica.
    for (int l = 0; l < 5-1; l++)
    {
        for (int j = l+1 ; j < 5; j++)                                                  
        {
            if (strcmp(Nomes[l], Nomes[j]) > 0)
            {
                strcpy(Aux,Nomes[l]);
                strcpy(Nomes[l], Nomes[j]);
                strcpy(Nomes[j], Aux);
            }
        }
    }
    //imprimir lista ordenada.
    for (int k = 0; k < 5; k++)
    {
        printf("\n%d - Nome: %s", k+1, Nomes[k]);
    }
    
    return 0;

}