#include <stdio.h>

int main ()
{
    int Matriz[4][4], Produto = 1;

// Entrada de dados da matriz ordem 10;
    for (int i = 0; i < 4; i++)
    {
        for ( int j = 0; j < 4; j++)
        {
            printf("\nEntre com o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
        }
        
    }
    
// Qualcula o produto dos elementos do triângulo abaixo da diagonal principal.
    for (int i = 0; i < 4; i++)
    {
        for ( int j = 0; j < 4; j++)
        {
            if (i > j)
            {//se linha [i] maior que a coluna [j], calcula o produto. 
                Produto = Produto  * Matriz[i][j];
            }
        }
    }
    printf("\nProduto do Triãngulo: %d", Produto);
}