#include <Stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Base,Expo;

    printf("\nDigite o valor da base: ");
    scanf("%d", &Base);
    printf("\nDigite o valor do expoente: ");
    scanf("%d", &Expo);

    if (Base >= 2 && Expo > 1)
    {
        int Pot = 1;
    
        for (int i = 1; i <= Expo; i++)
        {
            Pot = Pot * Base;
        }
        printf("\n O valor de %d elevado á %d e: %d", Base, Expo, Pot);
    }
    
}
