#include <stdio.h>

int main ()
{
    int Matriz[10][10];

// Entrada de de dados contendo 10 linhas e 10 colunas.
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("\nEntre com o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
        }
    }
// imprime somente o Triângulo abaixo da diagonal principal.
    printf("\nTrinãngulo Inferior\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i>j)
            {// Se linha maior que a coluna, imprime o elemento da matriz [linha][coluna].
                printf("%d ", Matriz[i][j]);
            }
            else
            {// Senao, irá imprimir espaço. 
                printf("   ");
            }
        }
        printf("\n");// faz a troca de linha.
    }
    
}