#include <stdio.h>

float Media (float N1, float N2, float N3)
{
    return N1 + N2 + N3 / 3;
}

int main ()
{
    float Nota1, Nota2, Nota3, media;

    printf("\nEntre com a priemira nota: ");
    scanf("%f", &Nota1);

    printf("\nEntre com a segunda nota: ");
    scanf("%f", &Nota2);

    printf("\nEntre com a terceira nota: ");
    scanf("%f", &Nota3);

    media = Media (Nota1, Nota2, Nota3);
    printf("\nA Média das notas %.1f, %.1f, %.1f é: %.2f", Nota1, Nota2, Nota3, media);
}