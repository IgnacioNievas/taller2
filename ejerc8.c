#include <stdio.h>

#define MAX 50

int dia();
int * semanaDia();

char main(){
 int *ps = semanaDia();

       char semana[7][MAX]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
 printf("  el  dia %d es :%s\n", *ps , semana[*ps-1]);
 return 0;
}


int dia(){
      int cant;  
   do{
  
       printf("elegia un numero entre 1 al 7: ");
        scanf("%d", &cant);
   
       }
        while( cant <= 0 || cant > 7);
    
     return cant;
}



int * semanaDia(){
 static  int n;
 
n=dia();


return &n;
       
}