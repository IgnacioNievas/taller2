#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 4

int main(){
int matriz1[N][N],matriz2[N][N],suma[N][N];
srand(getpid());


printf("Matriz 1:");
  printf("\n");
for(int ip=0 ; ip< N ; ip++){
    for(int jp=0;jp<N;jp++){
       matriz1[ip][jp] = rand()% 11;
   printf(" %d", matriz1[ip][jp]);
        }
        printf("\n");
      }
printf("\n");

printf("Matriz 2:");
  printf("\n");
for(int is=0 ; is< N ; is++){
    for(int js=0;js<N;js++){
       matriz2[is][js] = rand()% 11;
   printf(" %d", matriz2[is][js]);
        }
        printf("\n");
      }

      printf("suma:");
 printf("\n");
      for(int sum1=0 ; sum1< N ; sum1++){
    for(int sum2=0;sum2<N;sum2++){
      suma[sum1][sum2] = matriz1 [sum1][sum2] + matriz2[sum1][sum2];
   printf(" %d", suma[sum1][sum2]);
        }
        printf("\n");
      }
}



