#include <stdio.h>

#include <stdio.h>

int Fatorial (int Num)
{
    int fat= 1;

    for (int i = 1; i <= Num; i++)
    {
        fat *= i;
    }
    
    return fat;
}

int Combinacao(int n, int p) 
{
    if (n > p)
    {
        return 0;
    }
    
    int combinacao, fatnp ;
    int nfat, pfat;

    nfat = Fatorial(n);
    pfat = Fatorial(p);
    fatnp = Fatorial(p - n);
    
    combinacao = pfat / (nfat * fatnp);

    return combinacao;
}

int main ()
{
    int N, P, Resultado;

    printf("\nEntre com o número de elementos do conjunto N: ");
    scanf("%d", &N);

    printf("\nEntre com o número de elementos do conjunto P: ");
    scanf("%d", &P);

    Resultado = Combinacao(N,P); 

    printf("\nO Número de combinação C(%d, %d) é: %d", N, P,Resultado);

    return 0;
}