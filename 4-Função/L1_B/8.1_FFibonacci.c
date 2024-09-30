#include <stdio.h>

int fibonacci (int N)
{
    int a = 0, b = 1, proximo;

    if (N == 0)
    {
        return a;
    }
    else
    {
        if (N == 1)
        {
            return b;
        }
    }
    
    for (int i = 2; i <= N; i++)
    {
        proximo = a + b;
        a = b;
        b = proximo;   
    }
    
    return b;
}

int main()
{
    int i;

    printf("\nEntre com o valor do i-ésimo termo fibonacci: ");
    scanf("%d", &i);

    printf("O %d° termo da série fibonacci é: %d\n",i, fibonacci(i));

    return 0;
}