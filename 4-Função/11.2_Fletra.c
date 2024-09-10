#include <stdio.h>

char ehconsoante(char L)
{
    if (L >= 'a' && L <= 'z' || L >= 'A' && L <= 'Z')
    {
        if (L != 'a' && L != 'e' && L != 'i' && L != 'o' && L != 'u' &&
            L != 'A' && L != 'E' && L != 'I' && L != 'O' && L != 'U')
        {
            return 1;
        }
        
    }
    return 0;
}


int main ()
{
    char Letra;
    int resultado;

    printf("\nEntre com um caractere: ");
    scanf(" %c", &Letra);

     resultado = ehconsoante(Letra);

     printf(" Se resultado for 1 e consoante caso contrario será 0: %d\n", resultado);
}