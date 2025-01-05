#include <stdio.h>
#include <string.h>

int num_perfeito(int N)
{
    int soma = 0;
    char divisores[100] = "";

    for (int i = 1; i <= N/2; i++)
    {
        if (N%i == 0)
        {
            soma += i;
            
            char text[10];
            sprintf(text, "%d", i);
            strcat(divisores, text);

            if (i < N / 2 && soma + i <= N)
            {
                strcat(divisores, " + ");
            }
        }
        
    }
    if (soma == N)
    {
        printf("%d = %s\n", N, divisores);
        return 1;
    }
    
    return 0;
}

int main()
{
    for (int i = 1; i <= 1000 ; i++)
    {
        num_perfeito(i);
    }
    
}