#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int cantidad();
int matrices( int cant);
int sumaMatriz(int cant, int matriz[][cant],int matriz2[][cant]);


int main(){
  int cant = cantidad();
 matrices(cant);
 return 0;
}


int cantidad(){
int cant;
printf("Teclea el tamano de la matriz : \n" );
scanf("%d", &cant);
return cant;
}


int matrices( int cant){
  int matriz[cant][cant],matriz2[cant][cant];
  srand(getpid());

printf("Matriz 1:");
  printf("\n");
  for(int i=0 ; i< cant ; i++){
    for(int j=0;j<cant;j++){
       matriz[i][j] = rand() % 11;
  printf(" %d", matriz[i][j]);
        }
        printf("\n");
      }
printf("\n");
printf("Matriz 2:");
  printf("\n");
      for(int i=0 ; i< cant ; i++){
    for(int j=0;j<cant;j++){
       matriz2[i][j] = rand() % 11;
  printf(" %d", matriz2[i][j]);
        }
        printf("\n");
      }
      printf("\n");
     sumaMatriz(cant ,matriz,matriz2); 
}


int sumaMatriz(int cant, int matriz[][cant],int matriz2[][cant]){
  int suma[cant][cant];
        printf("suma:");
 printf("\n");
      for(int sum1=0 ; sum1< cant ; sum1++){
    for(int sum2=0;sum2<cant;sum2++){
      suma[sum1][sum2] = matriz [sum1][sum2] + matriz2[sum1][sum2];
   printf(" %d", suma[sum1][sum2]);
        }
        printf("\n");
      }
      printf("\n");
}