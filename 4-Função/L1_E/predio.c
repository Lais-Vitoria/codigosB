typedef struct
{
    int Andar_Atual;
    int Andares;
    int Capacidade;
    int Pessoas;

}elevador;

elevador criar_elevador( int qtd_andares , int capacidade)
{
    elevador new;

        new.Andar_Atual = 0;
        new.Andares = qtd_andares;
        new.Capacidade = capacidade;
        new.Pessoas = 0;

        return new;
}


int entra( elevador* e, int entrada_pessoas)
{
    if (entrada_pessoas + e->Pessoas == e->Capacidade)
    {
        e->Pessoas = entrada_pessoas; 

        return 1;
    }
    else
        return 0;
}


int sai(elevador* e, int saidade_pessoas)
{
    if (saidade_pessoas <= e->Pessoas)
    {
        e->Pessoas -= saidade_pessoas;

        return 1;
    }
    else
        return 0;
}

int sobe(elevador* e,int sobe_andares)
{
    if (sobe_andares > e->Andar_Atual)
    {
        e->Andar_Atual = sobe_andares;
        return 1;
    }
    else
        return 0;
}

int desce(elevador* e, int desce_andares)
{
    if (desce_andares < e->Andar_Atual)
    {
        e->Andar_Atual = desce_andares;
        return 1; 
    }
    else
        return 0;
}