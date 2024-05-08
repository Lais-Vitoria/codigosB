#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    float Salario, ValorPrestacao, PocentoSalario;

    printf("\nEntre com o salario bruto: ");
    scanf("%f", &Salario);

    printf("\nEntre com o valor da prestação: ");
    scanf("%f", &ValorPrestacao);

    PocentoSalario = Salario * 0.30;

    if(ValorPrestacao <= PocentoSalario)
    {
        printf("\nEmpréstimo concedido.");
    }
    else
    {
        printf("\nEmpréstimo não pode ser concedido.");
    }
}