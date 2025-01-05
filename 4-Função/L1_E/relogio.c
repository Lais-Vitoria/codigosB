#include <stdio.h>
typedef struct
{
    int hora;
    int minuto;
    int segundo;

}relogio;

relogio criar_relogio()
{
    relogio novo;

    novo.hora = 0;
    novo.minuto = 0;
    novo.segundo = 0;

    return novo;
}

int alterar_relogio(relogio* r, int Hora, int Minutos, int Segundos)
{
        if ( (Hora >= 0 && Hora < 24) && (Minutos >= 0 && Minutos < 60) &&
        (Segundos >= 0 && Segundos < 60))
        {
            r->hora = Hora;
            r->minuto = Minutos;
            r->segundo = Segundos;

            return 1;
        }
        else
            return 0;
}

void obter_horario(relogio* r, int *H, int *M, int *S)
{
    *H = r->hora;
    *M = r->minuto;
    *S = r->segundo;
}

void avancar_1segundo(relogio* r)
{
    r->segundo += 1;

    if (r->segundo > 59)
    {
        r->segundo = 0;
        r->minuto += 1;

        if (r->minuto > 59)
        {
            r->minuto = 0;
            r->hora += 1;

            if (r->hora > 23)
            {
                r->hora = 0;
            }
            
        }
        
    }
    
}

void imprimir(relogio *r)
{
    printf("\n%02d:%02d:%02d", r->hora, r->minuto, r->segundo);
}

int main ()
{
    int H, M, S;
    relogio r;
    printf("\nDigite a hora do relogio: ");
    scanf("%d", &H);

    printf("\nDigite os minutos: ");
    scanf("%d", &M);

    printf("\nDigite os segundos: ");
    scanf("%d", &S);

// Verifica se o horário informado é válido.
    while (alterar_relogio(&r, H, M, S) == 0)
    {
        printf("\nHorario inválido, digite novamente!");

        printf("\n\nDigite a hora do relogio:  ");
        scanf("%d", &H);

        printf("\nDigite os minutos: ");
        scanf("%d", &M);

        printf("\nDigite os segundos: ");
        scanf("%d", &S);

    }

    for (int i = 0; i < 200; i++)
    {
        avancar_1segundo(&r);
        imprimir(&r);
    }
    
    
    
}