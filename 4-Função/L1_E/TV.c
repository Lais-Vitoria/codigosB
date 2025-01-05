#include <stdio.h>

 typedef struct
 {
    int num;
    char nome_canal;
 }canal_tv;
 

 typedef struct
 {
    int ligada_desligada;
    int qtd_canais;
    int canal_selecionado;
    canal_tv canais[5];
 }tv;


 void ligar_desligar( tv *tv)
 {
   tv->ligada_desligada = !tv->ligada_desligada;
 }
 
 int tv_ligada(tv *LD)
 {
   
 }
