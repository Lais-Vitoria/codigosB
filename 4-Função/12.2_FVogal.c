#include <stdio.h>

char EhMinuscula( char C)
{
    if (C >= 'a' && C <= 'z' || C >= 'A' && C <= 'Z')
    {
        if (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'U')
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    char Vogal;
    int resultado;

    printf("Digite um caracter: ");
    scanf(" %c", &Vogal);

    resultado = EhMinuscula(Vogal);

    printf("\nSe resultado for 1 é uma vogal minuscula caso contrario será 0: %d", resultado);
}