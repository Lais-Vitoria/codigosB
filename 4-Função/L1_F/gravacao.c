#include <stdio.h>

int main()
{
    FILE *a = fopen("arq.txt", "w");

    if (a == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }
    char c;
    printf("Digite um caractere ou zero para encerrar\n");
    while (1)
    {
        printf("\nCaracter: ");
        scanf(" %c", &c);

        if (c == '0')
        {
            break;
        }
        fputc(c, a);
    }

    fclose(a);
}