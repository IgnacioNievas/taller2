#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef enum { MAYUSCULAS , MINUSCULAS } may_min ;

int strLargo ( const char  *origen ) ; // Cantidad de caracteres

 int strVacio ( const char *origen ) ; // retorna 1 si tiene al menos un caracter , 0 en otro caso
 void strCopia ( char *destino , const char *origen ) ; // Copiador
 /* prototipo modificado para permitir argumentos de tipo
string literales , en casi todos los
 compiladores un literal string es considerado una constante ,
o sea la  ́ofuncin no  ́ıpodra
 modificarlos pero , en algunos compiladores tales como GCC es
posible modificarlos ( ́usegn
 K&R el comportamiento es indefinido )*/
char * reverse ( char *string ) ;// retorna una cadena que es string invertida

 void strIzq ( char *destino , const char *origen ) ; // Saca blancos Izq .

 void strDer ( char *destino , const char *origen ) ; // Saca blancos Der .

 void strAmbos ( char *destino , const char *origen ) ; // Saca blancos Izq . y Der .

 void strMayMin ( char *destino , const char *origen , may_min m ) ;
// Convierte May. Min.

 int main () {
 char * text1 = " Sera Cierto ?? " ;
 int largo = strLargo( text1 );
 char * result = (char*) malloc(largo * sizeof(char) ) ;
 char * reves ;
 if ( result == NULL ){
return -1;
 } // sino pudo reservar memoria para result
// printf("%d", sizeof(result));
 printf ( " La cadena : " ) ;
 puts( text1 ) ;
 printf (" Se encuentra : %s \n " ,( strVacio( text1 ) ? " No vacia ": " Vacia " ) ) ;

printf (" Largo : %d \n " , strLargo(text1) ) ;
 strCopia ( result , text1 ) ;
printf (" Copia : [ %s ] \n " , result ) ;
strIzq ( result , text1 ) ; 
 printf (" Sin blancos a la Izq : " ) ;
 puts ( result ) ;
//  strDer ( result , text1 ) ;
// printf (" Der : [ %s ] \n " , result ) ; 
//  strAmbos ( result , text1 ) ;
//  printf (" Ambos : [ %s ] , sin blancos al principio ni al final. \n " , result ) ;

//  strMayMin( result , text1 , MAYUSCULAS ) ;
//  printf (" Mayusculas : [ %s ] \n " , result ) ;
//  strMayMin( result , text1 , MINUSCULAS ) ;
//  printf (" Minusculas : [ %s ] \n " , result ) ;
 reves = reverse( text1 ) ;
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
     int cant = strlen(string), j=0;
    char *aux;

     for(int i =cant-1 ;i>=0  ; i--){
  *(aux+j++) = *(string+i);
}

  return aux;
 } 


 void strIzq ( char *destino , const char *origen ){
     int cant = strlen(origen)-1;
     
for(int i=0 ;i < cant  ; i++){
    if(origen[i] == ' '){
    destino[i] = origen[i]+1;}
    else{
     destino[i] = origen[i];  
    }
    
}
 } ; // Saca blancos Izq .

 void strDer ( char *destino , const char *origen ){

 } ; // Saca blancos Der .

 void strAmbos ( char *destino , const char *origen ){

 } ; // Saca blancos Izq . y Der .

 void strMayMin ( char *destino , const char *origen , may_min m ){

 }
