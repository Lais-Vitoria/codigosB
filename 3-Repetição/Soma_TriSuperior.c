#include <stdio.h>

int main ()
{
    int Matriz[4][4], Soma = 0, i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\nEntre com o elemento da linha [%d] e coluna [%d]:  ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (j>i)
            {
                Soma += Matriz[i][j];
            }
        }
    }
    printf("\nA Soma do triângulo superior: %d", Soma);
    
    return 0;
}