#include <stdio.h>

char Linha2 (char Simbolo)
{
    char S;

    S = Simbolo;

    for (int i = 0; i < 25; i++)
    {
        printf("%c", S);
    }
    printf("\n");
    
             
}

int main ()
{ 

    Linha2('*');
    printf("CMP 1048\n");
    Linha2('@');
    printf("TÉCNICAS DE PROGAMAÇÃO\n");
    Linha2('+');

}