#include <stdio.h>

int main ()
{
    int Matriz[10][10];
//entrada de dados.
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("\nEntre com o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &Matriz[i][j]);
        }
        
    }
//Imprime a diagonal secudaria.
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            printf("   ");//espaços para alinhamento.
        }
        printf("%d\n", Matriz[i][3 - i]);
    }
}