#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");
    int Matriz[4][4];
    // os dois primeiro for, S�o para a leitura da matriz.
    for (int L = 0; L < 10; L++)
    
        for (int C = 0; C < 10; C++)
        {
            printf("\nDigite o numero da linha %d e coluna %d: ", L + 1, C + 1 );
            scanf("%d", &Matriz[L][C]);
        }
    //para imprimir  apenas os elementos da diagonal principal.
    for (int L = 0 ; L < 10; L++)
       {
            for (int T = 0; T < L; T++)
            {//A tabula��o (\t) � usada para alinhar os elementos da diagonal principal
                printf("\t");
            }
            printf("%d\n", Matriz[L][L]);
       }
    return 0;
}