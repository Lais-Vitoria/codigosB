#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int Mat;
    float N1;
    float N2;
    float Media;
} Aluno;


int main ()
{
    Aluno * a = (Aluno *)malloc(sizeof(Aluno));
    Aluno * b = (Aluno *)malloc(sizeof(Aluno));

    a->Mat = 10;
    a->N1 = 7.5;
    a->N2 = 3.5;
    a->Media = (a->N1 + a->N2)/2;


    b->Mat = 5;
    b->N1 = 4.6;
    b->N2 = 10;
    b->Media = (b->N1 + b->N2)/2;

    printf("Aluno a: \n");
    printf("Mat  = %d\n", a->Mat);

    free(a);
    free(b);

}