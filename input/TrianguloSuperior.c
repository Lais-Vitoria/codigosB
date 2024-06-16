#include <stdio.h>

int main ()
{
    int Matriz[4][4];

    //leitura e entrada de dados para a matriz de ordem 10.
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\nEntre com o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &Matriz[i][j]);
        }
        
    }

    //Imprime o triângulo superior acima da diagonal principsl.
    printf("\ntriângulo Superior\n");
    for (int i = 0; i < 4; i++)
    {   
        for (int j = 0; j < 4; j++)
        {   
            if (j > i)
            {
                printf("%d ", Matriz[i][j]);
            }
            else
            {
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}