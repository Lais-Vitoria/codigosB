#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    float Imc, Altura, Peso;

    printf("\nDigite seu Peso: ");
    scanf("%f", &Peso);

    printf("\nEntre com sua altura: ");
    scanf("%f", &Altura);

    Imc = Peso / (Altura * Altura);

    if(Imc < 20)
    {
        printf("\nAbaixo do peso.");
    }
    else
        if (Imc > 20 && Imc < 25)
        {
            printf("\nNormal.");
        }
        else
            if (Imc > 25 && Imc < 30)
            {
                printf("\nExcesso de peso.");
            }
            else
                if (Imc > 30 && Imc < 35)
                {
                    printf("\nObesidade.");
                }
                else
                    printf("\nObesidadde Mórbida");
                
            
        

}
