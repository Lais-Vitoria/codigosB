#include <stdio.h>
#include <locale.h>
int main ()
{
    int Num, Unidade, Dezena, Centena,NumInvertido;

    printf("\nEntre com um número de três digito: ");
    scanf("%d", &Num);
    
    Centena = Num/100;
    Dezena = Num%100/10;
    Unidade = Num%10;

    NumInvertido = Unidade*100+Dezena*10+Centena;

    printf("\nO número %d Invertido e: %d", Num, NumInvertido);

    setlocale(LC_ALL, "Portugese");
}