#include "1.h"


double ** producto_Escalar_Matriz(int fil, int col, int esc, double **matriz){
	int i, j;

	for( i=0; i<fil; i++ )				// filas
		for( j=0; j<col; j++ )			// columnas
			matriz[i][j] *= esc;

	return matriz;
}

double det(int b, double **m){

        double determinante = 0, aux = 0;

        int c;

        if(b==2)

                return m[0][0]*m[1][1] - m[1][0]*m[0][1];

        else{

                for(int j=0; j<b; j++){

                        double **menor = (double **)malloc(sizeof(double)*(b-1));

                        for(int h=0; h<(b-1); h++)
                                menor[h] = (double *)malloc(sizeof(double)*(b-1));

                        for(int k=1; k<b; k++){
                                c = 0;
                                for(int l=0; l<b; l++){

                                        if(l!=j){
                                                menor[k-1][c] = m[k][l];
                                                c++;

                                        }

                                }

                        }

                        aux = pow(-1, 2+j)*m[0][j]*det(b-1, menor);

                        determinante += aux;

                        for(int q = 0; q<(b-1); q++)
                                free(menor[q]);

                        free(menor);

                }

                return determinante;

        }

}


double ** identidad(int n) {
	int i, j;
	double ** m = (double **) malloc(n * sizeof (double *)); 
	for(i = 0; i < n; i++) {
		m[i] = (double *) malloc(n * sizeof(double));
		for(j = 0; j < n; j++)
			m[i][j] = 0.0;
		m[i][i] = 1.0;
	}
	return m;
}

void escalar(){
	int filas, columnas;
	double **matriz, factor;

	printf("\nProducto escalar de una matriz\nFilas: ");
	scanf("%d", &filas );

	printf("Columnas: ");
	scanf("%d", &columnas );

	matriz = CrearMatriz( filas, columnas );

	if( matriz == NULL ){
		printf("\n\nError en la creacion de la matriz");
		
	}else{

		LlenarMatriz( filas, columnas, matriz );

		printf("\nFactor escalar: ");
		scanf( "%lf", &factor );

		producto_Escalar_Matriz( filas, columnas, factor, matriz );

		MostrarMatriz( filas, columnas, matriz );
		
	}

}
int main(){

	double ** m = identidad(3);
	MostrarMatriz(3, 3 , m);

	double** mm = CrearMatriz(3, 3);
	LlenarMatriz(3, 3, mm);
	producto_Escalar_Matriz(3, 3, 4, mm);
	MostrarMatriz(3, 3, mm);

	double** mmm = CrearMatriz(3, 3);	
	LlenarMatriz(3, 3, mmm);
	double determinante = det(3, mmm);
	printf("el determinante de la matriz es: %f\n", determinante);

	EliminarMatriz(3, 3, m);
	EliminarMatriz(3, 3, mm);
	EliminarMatriz(3, 3, mmm);
	
	return 0;
}