#include <stdio.h>
#include <locale.h>

int main ()
{ 
    setlocale(LC_ALL,"Portuguese");
    
    char Nome[50];
    char Endereco[100];
    char Telefone[12];

    printf("\nDigite Seu Nome: ");
    scanf("%49[^\n]", Nome);

    printf("\nQual � o seu endere�o: \n");
    scanf(" %99[^\n]", Endereco);

    printf("\nDigite seu telefone: \n");
    scanf(" %11[^\n]", Telefone);

    printf("\nNome: %s", Nome);
    printf("\nEndere�o: %s", Endereco);
    printf("\nTelefone: %s", Telefone);
 // o eespa�o e para iguinorar o \n

}