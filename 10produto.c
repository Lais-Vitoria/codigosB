#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Num1, Num2, Produto;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &Num1);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &Num2);

    Produto = Num1 * Num2;

    printf("\nProduto dos dois é: %d", Produto);
}
