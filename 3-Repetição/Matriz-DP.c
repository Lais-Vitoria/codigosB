#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");

    int Matriz[10][10];
    // Entradad de dados da matriz sendo 10 linhas e 10 colunas.
    for (int L = 0; L < 10; L++)
        for (int C = 0; C < 10; C++)
        {
            printf("\nDigite o numero da linha %d e coluna %d: ", L + 1, C + 1 );
            scanf("%d", &Matriz[L][C]);
        }

    // Imprime a matriz sem a diagonal principal.
    for (int L = 0; L < 10 ; L++)
    {
        for ( int C = 0; C < 10 ; C++)
        {
            if (L == C)
            {
                printf("  ");
            }
            else
            {
                printf("%d ", Matriz[L][C]);
            }
        }
        printf("\n");
    }

}