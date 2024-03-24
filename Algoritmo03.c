#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int Produto;
    Produto = 28 * 43;
    printf("\nO produto entre 28 e 43: %d", Produto);
}