#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    float Salario, ValorPrestacao, PocentoSalario;

    printf("\nEntre com o salario bruto: ");
    scanf("%f", &Salario);

    printf("\nEntre com o valor da presta��o: ");
    scanf("%f", &ValorPrestacao);

    PocentoSalario = Salario * 0.30;

    if(ValorPrestacao <= PocentoSalario)
    {
        printf("\nEmpr�stimo concedido.");
    }
    else
    {
        printf("\nEmpr�stimo n�o pode ser concedido.");
    }
}