#include <Stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    float Saldo, NovoSaldo;

    printf("\nEntre com o valor da aplica��o: ");
    scanf("%f", &Saldo);

    NovoSaldo = Saldo * 0.01 + Saldo;

    printf("\nO Novo Saldo da aplica��o �: %.2f", NovoSaldo);
}