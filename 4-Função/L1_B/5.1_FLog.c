#include <stdio.h>
#include <math.h>

double Log ( double L, double B)
{
    return log(L)/log(B);
}

int main ()
{
    double Logaritmando, Base, Resultado;

    printf("\nEntre com o logaritmando: ");
    scanf("%lf", &Logaritmando);

    printf("\nEntre coma base: ");
    scanf("%lf", &Base);

    Resultado = Log(Logaritmando, Base);
    printf("logaritmo %.2lf na base %.2lf: %.2lf", Logaritmando, Base, Resultado);

}