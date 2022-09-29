#include <stdio.h>
#include <stdlib.h>

typedef struct char_string {
char c ;
char * cadena ;
}Char_string ;

int cantidad ( Char_string *frase ) ;
int * ocurrencias(Char_string * frase, int cantidad ) ;