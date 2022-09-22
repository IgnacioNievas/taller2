#include <stdio.h>
#include <stdlib.h>

typedef struct tiempo{
    int anio , mes,dia,hora,minutos,segundos;
}Tiempo;

int compara_tiempos(Tiempo *t1, Tiempo *t2);
int comprar2(int t1, int t2);
void imprimir_tiempo(Tiempo t); 
