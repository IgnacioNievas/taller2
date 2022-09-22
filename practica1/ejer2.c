#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 4

float sumar( float nota[][N],int fila);
char prom_al( float notas_al);
char sumar_asi( float nota[][N]);

int main(){

float notas[N][N] ;

srand(getpid());

for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
                        notas[i][j] = rand() % 11;
                         printf("%.2f ", notas[i][j]); 
                                  }  
                                prom_al(sumar(notas,i)); 
                                 printf("\n");
                                  
                                    }
                        printf("\n");    
                              
 sumar_asi(notas);
 printf("--> promedio de asignaturas");   
        
return 0;
}


float sumar( float nota[][N],int fila){
    float sum = 0;
    for(int i=0;i < N;i++){
        
        sum+=nota[fila][i];}
    

    return sum;
}

char prom_al( float notas_al){

notas_al /= N;

if(notas_al < 6){
 printf(" --> el promedio de los alumnos es de : %.2f y el alumno esta : libre ",notas_al);
}else if(notas_al < 8){
 printf(" --> el promedio de los alumnos es de : %.2f y el alumno esta : regular",notas_al);
}else{
   printf(" --> el promedio de los alumnos es de : %.2f y el alumno esta : promovido ",notas_al);  
}  
}



char sumar_asi( float nota[][N]){
    float sum ;

for(int j=0;j< N;j++){
   sum = 0;
    for( int i=0;i<N;i++)
    {
        
   sum+=nota[i][j];
     
    }
  sum/=N;
  printf("%.2f ", sum); 
}     
}