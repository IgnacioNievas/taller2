#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 typedef enum { MAYUSCULAS , MINUSCULAS } may_min ;

int strLargo ( const char  *origen ) ; 

 int strVacio ( const char *origen ) ; 
 void strCopia ( char *destino , const char *origen ) ;
char * reverse ( char *string ) ;// retorna una cadena que es string invertida

 void strIzq ( char *destino , const char *origen ) ; // Saca blancos Izq .

 void strDer ( char *destino , const char *origen ) ; // Saca blancos Der .

 void strAmbos ( char *destino , const char *origen ) ; // Saca blancos Izq . y Der .

 void strMayMin ( char *destino , const char *origen , may_min m ) ;


 int main () {
 char * text1 = " Sera Cierto ?? " ;
 int largo = strLargo( text1 ) ;
 char * result = (char*) malloc(largo*sizeof(char)) ;
 char * reves ;
 if ( result == NULL ){
return -1;
 } // sino pudo reservar memoria para result

 printf ( " La cadena : " ) ;
 puts( text1 ) ;
 printf (" Se encuentra : %s \n " ,( strVacio( text1 ) ? " No vacia ": " Vacia " ) ) ;

printf (" Largo : %d \n " , strLargo(text1) ) ;
 strCopia ( result , text1 ) ;
printf (" Copia : [ %s ] \n " , result ) ;
strIzq ( result , text1 ) ; 
 printf (" Sin blancos a la Izq : " ) ;
 puts ( result ) ;
 strDer ( result , text1 ) ;
printf (" Der : [ %s ] \n " , result ) ; 
 strAmbos ( result , text1 ) ;
 printf (" Ambos : [ %s ] , sin blancos al principio ni al final. \n " , result ) ;

  strMayMin( result , text1 , MAYUSCULAS ) ;
 printf (" Mayusculas : [ %s ] \n " , result ) ;
 strMayMin( result , text1 , MINUSCULAS ) ;
 printf (" Minusculas : [ %s ] \n " , result ) ;
 reves = reverse(text1) ;
 printf( " La cadena : %s invertida queda : %s \n " , text1 , reves) ;
free(result);

 return 0;
 }

 int strLargo ( const char *origen ){
    int largo;
for(int i =0 ; i< strlen(origen); i++){
largo = i+1;
}
return largo ;
 }

 int strVacio ( const char *origen ){
    for(int i =0 ; i< strlen(origen); i++){
    if(i >= 0){
return 1;
    }else{
return 0;
    }}

 }

 void strCopia ( char *destino , const char *origen ){
     int cant = strlen(origen)-1;
     
for(int i=0 ;i < cant  ; i++){
    *(destino+i) = *(origen+i);   
}

 }

 char * reverse ( char *string ){
     int cant = strlen(string)-1, j=0;
    char *aux = (char*) malloc(sizeof(char)) , tem;
if ( aux == NULL ){
printf("no se pudo reserva la memoria \n");
 } 
     for(int i =cant-1 ;i>=0  ; i--){
  tem = *(string+i);
  *(aux+j++)=tem;
}

  return aux;

  free(aux);
 } 


 void strIzq ( char *destino , const char *origen ){

     int cant = strlen(origen)-1;
      
for(int i=0 ;i <( cant/3 ) ; i++){
    if( *(destino+i) == ' '){
    *(destino+i)=*(destino+i)+1;
    }
    
 }
  
  } ; //Saca blancos Izq .

 void strDer ( char *destino , const char *origen ){
int cant = strlen(origen)-1;

      
for(int i=cant-1 ;i>=cant/2 ; i--){
    if( *(destino+i) == ' '){
    *(destino+i)=*(destino+i)+1;
    } 
 }
 } ; // Saca blancos Der .

 void strAmbos ( char *destino , const char *origen ){


 int cant = strlen(origen)-1;
      
for(int i=0 ;i <( cant/3 ) ; i++){
    if( *(destino+i) == ' '){
    *(destino+i)=*(destino+i)+1;
    }
    
 }

for(int i=cant-1 ;i>=cant/2 ; i--){
    if( *(destino+i) == ' '){
    *(destino+i)=*(destino+i)+1;
    } 
 }
 } ; // Saca blancos Izq . y Der .

 void strMayMin ( char *destino , const char *origen , may_min m ){
    
    char ch;
    int cant = strlen(origen)-1;
    
    if(m == 0){
  for(int j =0 ;j < cant; j++) {
        ch = origen[j];
    destino[j]= toupper(ch);
       
    }}else{
         for(int j =0 ;j < cant; j++) {
        ch = origen[j];
      destino[j]=tolower(ch);
    } 
    }
 }// Convierte May. Min.
