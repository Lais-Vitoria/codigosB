#include <stdio.h>

int main()
{
    FILE * f = fopen("teste.txt","r");

    if (f == NULL)
    {
        printf("Deu erro");
        return 1;
    }
    int mat;
    float N1, N2, Media;
    char nome[100];

    fscanf(f, "%d %s %f %f", &mat, nome, &N1, &N2);

    Media = (N1 + N2)/2;

    printf("%d | %s | %.1f | %.1f | %.1f ", mat, nome, N1, N2, Media);

    fclose(f);

    return 0;
}