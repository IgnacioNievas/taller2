#include <stdio.h>

#define N 10

int main(){

int matriz[N][N];

for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        if(i==j){
           matriz[i][j]=1; 
        }else{
            matriz[i][j]=0;
            }

            printf("%d", matriz[i][j]);
    }
    printf("\n");
}
return 0;
}