#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int Soma = 0;
    for (int i = 26; i <= 198; i= i + 2)
    { 
        Soma = Soma + i;
    }
    printf("\n%d", Soma);
}