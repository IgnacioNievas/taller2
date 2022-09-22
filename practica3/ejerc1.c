#include "ejerc1.h"

int main(){
Tiempo *t1,*t2;
t1 =(Tiempo*) malloc(sizeof(Tiempo));
t2 =(Tiempo*) malloc(sizeof(Tiempo));

t1->anio=2018;
t1->mes=5;
t1->dia=8;
t1->hora=17;
t1->minutos=30;
t1->segundos=58;

t2->anio=2014;
t2->mes=10;
t2->dia=21;
t2->hora=19;
t2->minutos=30;
t2->segundos=59;

int tiempo = compara_tiempos(t1, t2);

if(tiempo == 1){
printf("*t1 es anterior a *t2\n");
}else if(tiempo == -1){
printf("*t1 es posterior a *t2\n");
}else{
    printf("*t1 es igual a *t2\n");
}


imprimir_tiempo(*t1);
imprimir_tiempo(*t2);
}



int compara_tiempos(Tiempo *t1, Tiempo *t2){
int aux;

aux =comprar2(t1->anio,t2->anio);
if(aux == 1 || aux ==-1){
    return aux;
}
aux =comprar2(t1->mes,t2->mes);
if(aux == 1|| aux ==-1){
    return aux;
}
aux =comprar2(t1->dia,t2->dia);
if(aux == 1|| aux == -1){
    return aux;
}
aux =comprar2(t1->hora,t2->hora);
if(aux ==1|| aux == -1){
    return aux;
}
aux =comprar2(t1->minutos,t2->minutos);
if(aux == 1|| aux == -1){
    return aux;
}
aux =comprar2(t1->segundos,t2->segundos);
 return aux;
};


int comprar2(int t1, int t2){
    if(t1==t2){
return 0;
    }else if(t1<t2){
return 1;
    }else{
return -1;
    }
};
void imprimir_tiempo(Tiempo t){
printf(("%d/%d/%d %d:%d:%d \n"),t.dia,t.mes,t.anio,t.hora,t.minutos,t.segundos);
}; 