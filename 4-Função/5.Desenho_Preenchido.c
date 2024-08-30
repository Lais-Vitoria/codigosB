#include <stdio.h>

char Desenha_Retangulo ( int L, int C, char S, char S2)
{
    char Simbolo = S;

    for (int i = 0; i < L; i++) 
    {
        if (i == 0 || i == L - 1) 
        {
            for (int j = 0; j < C; j++)
            {
                printf("%c", Simbolo);
            }
        } 
        else {
        printf("%c", Simbolo);
        for (int j = 1; j < C - 1; j++) 
        {
            printf("%c", S2);
        }
        printf("%c", Simbolo);
    }
    printf("\n");
}

    
}

int main ()
{
    int Linhas, Colunas;
    char Caracter, Caracter2;

    printf("\nQuantas linhas: ");
    scanf("%d", &Linhas);

    printf("\nQuantas colunas: ");
    scanf("%d", &Colunas);

    printf("\nEntre com o caracter desejado: ");
    scanf(" %c", &Caracter);

    printf("\nEntre com o caracter de preenchimeto: ");
    scanf(" %c", &Caracter2);
    Desenha_Retangulo(Linhas, Colunas, Caracter, Caracter2);
}