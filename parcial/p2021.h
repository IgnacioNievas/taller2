#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct numRed
{
 char *ip;
 char *mask;   
  char *red;  
}NumRed;


int ** llenarMatiz(int **matriz, int filas, int cols);
int **expandir(int **matriz, int filas , int columnas);
void mostraM(int **mat, int filas, int columnas);