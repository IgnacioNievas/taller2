#include "1.h"

/*
 * Funciones de manipulacion de matrices de reales
 */

double ** CrearMatriz( int filas, int columnas ){
	int i;
	double **matriz;

	matriz = (double **) malloc( filas * sizeof( double *));

	if (matriz == NULL)
		return matriz;

	for( i=0; i < columnas; i++ ){
		matriz[i] = malloc( sizeof( double ) * columnas);
		if ( matriz[i] == NULL ){
			free( matriz );
			matriz = NULL;
		}
	}
	return matriz;
}

void EliminarMatriz(int filas, int columnas, double **matriz){

	for(int x = 0; x < columnas; x++){
		free(matriz[x]);
	}
	free(matriz);
}

void LlenarMatriz( int filas, int columnas, double **matriz ){
	int i, j;
	double valor;

	for( i=0; i < filas; i++ ){
		for( j=0; j < columnas; j++ ){
			printf("Valor [%d][%d]:", i, j);
			scanf( "%lf", &valor );
			matriz[i][j] = valor;
		}
	}
	return;
}

void MostrarMatriz( int filas, int columnas, double **matriz ){
	int i, j;

	for( i=0; i< filas; i++ ){
		for( j=0; j < columnas; j++ )
			printf("%f ", matriz[i][j]);
		printf("\n");
	}
	
}

/*
int main()
{
	double ** m = CrearMatriz(3, 3);
	LlenarMatriz(3, 3, m);

	MostrarMatriz(3, 3, m);

	EliminarMatriz(3, 3, m);
//	EliminarMatriz(3, 3, m);

	return 0;
}*/