#include <stdio.h>
#include <stdlib.h>

int main()
{
    char NomeArquivo[10], nomeArquivo2[10];
    printf("Digite o nome do arquivo: ");
    scanf("%s", NomeArquivo);

    printf("Digite o nome do 2 arquivo: ");
    scanf("%s", nomeArquivo2);

   FILE *arq1 = fopen(NomeArquivo, "r");
   FILE *arq2 = fopen(nomeArquivo2, "w+");

    char d;
   fread(&d, sizeof(char), 1, arq1);
   fwrite(&d, sizeof(char), 1, arq2);


    fclose(arq1);
    fclose(arq2);

}

