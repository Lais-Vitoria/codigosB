#include <stdio.h>

int main ()
{
    FILE *b = fopen("arq.txt", "r");

    char c;

    if (b == NULL)
    {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
    
    while ((c = fgetc(b)) != EOF)
    {
        printf("%c", c);
    }

    fclose(b);
}