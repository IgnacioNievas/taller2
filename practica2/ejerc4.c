#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define N 10
void mostrarMatiz(int **A, int f, int c);
void transpMatiz(int **A, int f, int c);





int main(void){
int filas, columnas,i,**mat;
printf("cantida de filas que desea:");
scanf("%d",&filas);
printf("cantida de columnas que desea:");
scanf("%d",&columnas);

srand(getpid());

mat= (int**) malloc(filas*sizeof(int*));
if(mat==NULL){
    printf("no hay memoria");
exit(1);
}


for(i=0;i<filas;i++){
    *(mat+i)=(int*) malloc(columnas*sizeof(int));
    if(*(mat+i)==NULL){
    printf("no hay memoria");
exit(1);
}
}



mostrarMatiz(mat , filas, columnas);
transpMatiz(mat , filas, columnas);




 for(i=0;i<filas;i++){
free(*(mat+i));
 }
free(mat);

return 0;
}

void mostrarMatiz(int **A, int f, int c){
int i,j;
for(i=0;i< f;i++){
    
    for(j=0;j< c;j++){
*(*(A+i)+j)= rand() % N;
    }
    
}
for(i=0;i< f;i++){
    printf("| ");
    for(j=0;j< c;j++){
printf(" %d",*(*(A+i)+j));
    }
    printf(" | \n");
}
}

void transpMatiz(int **A, int f, int c){
    int i ,j;

    printf("matriz transpuesta\n");

    for(i=0;i<c;i++){
        printf("| ");
        for(j=0;j< f;j++){
          printf(" %d",  *(*(A+j)+i));
        }
         printf(" | \n");
    }
}


