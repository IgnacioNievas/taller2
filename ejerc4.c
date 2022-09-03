#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int fila();
int columna();
int matrizTansp(int fil , int column, int matriz[][column]);


int main(){
int fil= fila();
int column=columna();

int matriz[fil][column];
srand(getpid());

 printf("\n");

 printf("Matriz original");

 printf("\n");

for(int i=0 ; i < fil;i++){
    for(int j=0; j< column; j++){
        matriz[i][j]= rand()%11;
        printf(" %d", matriz[i][j]);
    }
    printf("\n");
}

 printf("\n");

 printf("Matriz Transpuesta");
  printf("\n");
matrizTansp(fil,column, matriz);
 printf("\n");

}




int fila(){
int fila;
printf("Teclea el tamano de la fila : \n" );
scanf("%d", &fila);
return fila;
}

int columna(){
int column;
printf("Teclea el tamano de la columna : \n" );
scanf("%d", &column);
return column;
}

int matrizTansp(int fil , int column, int matriz[][column]){
   for(int i=0 ; i < column;i++){
    for(int j=0; j< fil; j++){
        matriz[j][i];
        printf(" %d", matriz[j][i]);
    }
    printf("\n");
} 
}