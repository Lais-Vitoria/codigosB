#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");

    int Limite, J = 0;

    printf("\nEntre com o Limite: ");
    scanf("%d", &Limite);

    for (int i = 1; i <= Limite; i++)
    {
        J = J + 2;
        if (J % 2 == 0)
        {
            printf(" %d", J);
        }
        
    }
    
}