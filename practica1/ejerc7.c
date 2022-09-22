#include <stdio.h>


int cantidad();


int main (){
int cant = cantidad();
int arr[cant], *pa,tem;
pa = arr;

for(int j=0; j <cant ; j++)
{
        printf("ingrese los numeros para llenar el array: ");
        scanf("%d", &arr[j]);
    
}


printf("Array invertido:\n");
for(int i =cant-1 ; i>=0 ; i-- )
{
printf("*(pa + %d): %d ", i, *(pa + i));
printf("\n");
}


return 0;

}

int cantidad(){
      int cant;  
   do{
  
       printf("Agrega un numero para decir el tamano del array menor o igual a 100: ");
        scanf("%d", &cant);
   
       }
        while( cant <= 0 || cant > 100);
    
     return cant;
}

