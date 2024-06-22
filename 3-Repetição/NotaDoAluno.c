#include <stdio.h>

int main ()
{
    char Nome[5][30];
    float Media[5];
    double Nota1[5],Nota2[5];
    //entrada de dados.
    for (int i = 0; i < 5; i++)
    {
        printf("Entre com o nome do %d aluno: ",i+1);
        scanf(" %[^\n]", Nome[i]);

        printf("Digite a 1 Nota: ");
        scanf("%lf", &Nota1[i]);

        printf("Digite a 2 Nota: ");
        scanf("%lf", &Nota2[i]);

        Media[i] = Nota1[i] + Nota2[i] /2;
    }
    //Lista.
    printf("\n\n|%-10s|%5s|%5s|%5s|\n", "Nome", "Nota1", "Nota2", "Média");
    for (int i = 0; i < 5; i++)
    {
        printf("|%-10s|%5.2lf|%5.2lf|%5.2f|\n", Nome[i], Nota1[i], Nota2[i], Media[i]);
    }
    
