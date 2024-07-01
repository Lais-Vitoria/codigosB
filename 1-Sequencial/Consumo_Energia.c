#include <stdio.h>

int main ()
{
    float Salario, Quilowatts, ValorQW, valorAserPago,ValorDesconto;

    printf("\nDigite o valor do salario: ");
    scanf("%f", &Salario);

    printf("\nDigite o consumo em Quilowatts: ");
    scanf("%f", &Quilowatts);

    ValorQW = Salario / 700;
    valorAserPago = ValorQW * Quilowatts;
    ValorDesconto = valorAserPago * 0.9;

    printf("\nO valor por cada quilowatts: %.2f", ValorQW);
    printf("\nValor em reais a se pago: %.2f", valorAserPago);
    printf("\nvalor com desconto: %.2f", ValorDesconto);

}