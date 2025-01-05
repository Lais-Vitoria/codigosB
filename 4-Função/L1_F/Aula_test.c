#include <stdio.h>

int main()
{
    FILE * f = fopen("Aula_test.txt","w+");

    if (f == NULL)
    {
        printf("Deu erro");
        return 1;
    }
    
    fprintf(f, "Meu nome é %s e minha idade é %d\n", "Zion", 29);

    fflush(f);

    fclose(f);

    return 0;
}