// Algoritmo 40 do livro introdu��o � Progama��o
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int Num1, Num2, Divisao, Resto;
// O Primeiro n�mero e o Dividendo
    printf("\nEntre com um n�mero inteiro: ");
    scanf("%d",&Num1);
// O segundo n�mero e o Divisor
    printf("\nEntre com o segunndo n�mero inteiro: ");
    scanf("%d",&Num2);
// Divisao e o Quociente
    Divisao = Num1 / Num2;
// Resto da Divis�o
    Resto = Num1 % Num2;

    printf("\nDividendo: %d", Num1);
    printf("\nDivisor: %d", Num2);
    printf("\nQuociente: %d", Divisao);
    printf("\nResto: %d", Resto);


}

// As saidas devem ser:
// dividendo
// divisor
// quociente
// resto