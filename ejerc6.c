#include <stdio.h>


char main(){
int i =5 , j []={1 ,2 ,3 ,4 ,6 ,5,7 ,8 ,9 ,10};
 char x = 'a'  , pal [] ="texto en c";
int * pi=&i ;
char * pc=pal ;
int tamanioJ = sizeof(j) , byteJ=sizeof(j[0]);
int longuitudJ = tamanioJ / byteJ ;
int tamanioPal = sizeof(pal) , bytePal=sizeof(pal[0]);
int longuitudPal = tamanioPal / bytePal ;


printf("Por Variable :i Valor :%d   Direccion : %p \n", i, &i);
printf("Por Variable :pi Valor :%p   Direccion : %p \n" ,pi , &pi);

 for (int i = 0; i < longuitudJ; i++) {
       printf(" Por Variable:j[%d]  Valor: %d Direccion : %p \n", i,j[i],&j[i]);
   }

for (int i = 0; i < longuitudJ; i++) {
  pi=j;
    printf(" Por Puntero:*(pi +%d ) Valor: %d Direccion : %p \n", i, *(pi +i), pi +i);
   }



 for (int i = 0; i < longuitudPal; i++) {
       printf(" Por Variable:pal[%d]  Valor: %c Direccion : %p \n", i,pal[i],&pal[i]);
   }

for (int i = 0; i < longuitudPal; i++) {

    printf(" Por puntero:*(pc +%d ) Valor: %c Direccion : %p \n", i, *(pc +i), pc +i);
   }

printf("Direccin de *pi :%p , Direccin de *pc :%p",&pi , &pc);

return 0;
}