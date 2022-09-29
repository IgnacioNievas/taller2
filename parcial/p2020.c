#include "p2020.h"
//1. La funci ́on cantidad retornar ́a el n ́umero de veces que se encuentra la letra en la frase.
// 2. La funci ́on ocurrencias retornar ́a las posiciones en las que se encuentran dicha letra en la frase.


int main(void){
Char_string *car;
int n;
printf("cantidad de caracteres para la frase");
scanf("%d",&n);

car  = (Char_string*)malloc(n+1 * sizeof(Char_string));
if(car==NULL){
    printf("no hay memoria disponible");
    exit(1);
}

car->c='a';
for(int i=0;i<n;i++){
    car[i].cadena= (Char_string*) malloc(n+1*sizeof(Char_string));
    if(car[i].cadena==NULL){
    printf("no hay memoria disponible");
    exit(1);
}
}
for(int i=0;i<n;i++){
scanf("%s",car[i].cadena);}

cantidad (car);
free(car);
}
int cantidad ( Char_string *frase ){
    int g=0;
    for(int i ; i <20;i++){
        if(frase[i].cadena == frase->c){
            g++;
        }
    }
    return g;
} ;
// int * ocurrencias(Char_string * frase, int cantidad ){} ;