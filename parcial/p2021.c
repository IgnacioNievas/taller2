#include "p2021.h"

int main (void){
    int **matriz,  filas, cols,i;
    printf("cantidad de filas deseadas:");
    scanf("%d",&filas);
     printf("cantidad de columnas deseadas:");
    scanf("%d",&cols);
srand(getpid());

    matriz = (int**) malloc(filas*sizeof(int*));
    if(matriz==NULL){
        printf("no hay memoria disponible");
        exit(1);
    }
    for(i=0;i<filas;i++){
        *(matriz+i)= (int*) malloc(cols*sizeof(int));
           if(*(matriz+i)==NULL){
        printf("no hay memoria disponible");
        exit(1);
    }
    }

matriz =llenarMatiz(matriz,filas,cols);
printf("Matriz nornal:\n");
mostraM(matriz,filas,cols);

printf("Matriz expandida:\n");
matriz =expandir(matriz,filas,cols);
mostraM(matriz,filas+1,cols+1);

for(i=0;i<filas;i++){
    free(*(matriz+i));
}
free(matriz);
}

int ** llenarMatiz (int **matriz, int filas, int cols){
    int j,i;
    for(i=0;i < filas;i++){
        for(j=0;j<cols;j++){
            *(*(matriz+i)+j)= rand() % 11;
        }
    }

    return matriz;
}

int **expandir(int **matriz, int filas, int columnas){
    int i;
    matriz = (int **)realloc(matriz, (filas + 1) * sizeof(int *));
    if (matriz == NULL){
        printf("No se pudo redimencionar la matriz");
        exit(1);
    }
    for (i = 0; i < filas + 1; i++){
        *(matriz + i) = (int *)realloc(*(matriz + i) ,(columnas + 1) * sizeof(int));
        if (*(matriz + i) == NULL){
            printf("No se pudo reservar memoria");
            exit(1);
        }
    }
    for (i = 0; i < filas + 1; i++){
         *(*(matriz + i) + columnas) = 0;
    }

    return matriz;
}


void mostraM(int **mat, int filas, int columnas){
    int i, j;
    for (i = 0; i < filas; i++){
        printf("[ ");
        for (j = 0; j < columnas; j++){
            printf("%2d ", *(*(mat + i) + j));
        }
        printf("]\n");
    }
}