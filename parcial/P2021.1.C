#include "p2021.h"

int main(void)
{NumRed  *numeros= (NumRed*) malloc(sizeof(char));
if(numeros==NULL){
        printf("no hay memoria disponible");
        exit(1);
    }
for(int i=0;i<1;i++){printf("completa con el numero ip:\n");
numeros[i].ip= (char*)malloc(17*sizeof(char));
if(numeros[i].ip==NULL){
        printf("no hay memoria disponible");
        exit(1);
    }
scanf("%s",numeros[i].ip);
printf("completa con el numero mask:\n");
numeros[i].mask= (char*)malloc(17*sizeof(char));
if(numeros[i].mask==NULL){
        printf("no hay memoria disponible");
        exit(1);
    }
scanf("%s",numeros[i].mask);
printf("completa con el numero red:\n");
numeros[i].red= (char*)malloc(17*sizeof(char));
if(numeros[i].red==NULL){
        printf("no hay memoria disponible");
        exit(1);
    }
scanf("%s",numeros[i].red);}
for(int i=0;i<1;i++){
printf("el numero red es: %s\n",numeros[i].red);
for(i=0;i< 1;i++){
    free(numeros[i].ip);
    free(numeros[i].mask);
    free(numeros[i].red);
}
free(numeros);
}}