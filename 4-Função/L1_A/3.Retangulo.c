#include <stdio.h>

char desenha_retangulo_solido (int C, int L, char Simbolo)
{
    char S = Simbolo;

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%c", S);
        }
        printf("\n");
    }

}

int main ()
{
    int Linha, Coluna; 
    char Caracter;

    printf("\nDigite o número de linhas: ");
    scanf("%d", &Linha);

    printf("\nDigite o número de colunas: ");
    scanf("%d", &Coluna);

    printf("\nEntre com o caracter desejado: ");
    scanf(" %c", &Caracter);

    desenha_retangulo_solido(Coluna, Linha, Caracter);
    

}