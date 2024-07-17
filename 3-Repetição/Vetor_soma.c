#include <stdio.h>

int main ()
{
    int i, A[5], B[5], Soma[5];

    printf("Vetor 1\n"); 
    for ( i = 0; i < 5; i++)
    {// Vetor 1.
        printf("\nEntre com o %d elemento: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nVetor 2\n");

    for ( i = 0; i < 5; i++)
    {// Vetor 2.
        printf("\nEntre com o %d elemento: ", i + 1);
        scanf("%d", &B[i]);
    }

    for ( i = 0; i < 5; i++)
    {// Vetor Soma.
        Soma[i] = A[i] + B[i];
        printf("\nSOMA[%d] = %d",i + 1, Soma[i]); //Imprime o vetor soma
    }
    
}