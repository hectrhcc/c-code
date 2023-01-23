/* ################################################################################ */
/* Diseñar el algoritmo correspondiente a un programa, que: */
/* * Crea una tabla bidimensional de longitud 5x15 y nombre 'marco'. */
/* * Carga la tabla con dos únicos valores 0 y 1, donde el valor uno ocupará las  */
/* posiciones o elementos que delimitan la tabla, es decir, las más externas,  */
/* mientras que el resto de los elementos contendrán el valor 0. */
/* * Visualiza el contenido de la matriz en pantalla. */
/* ################################################################################ */
/* Procedimiento */
/* Recorro la tabla: si el indice de fila = 0 (extremo izquierdo) */
/* o índice de fila = número de filas -1 (extremo derecho) */
/* o índice de columnas = 0 (extremo superior) */
/* o índice de columnas = de columnas columnas -1 (extremo inferior) */
/* inicializo a 1, sino inicializo a 0. */
/* Recorro la tabla por filas y columnas para mostrar los valores. */
/* Datos de entrada: Nada */
/* Información de salida: Los valores de la tabla */
/* Variables: matriz (tabla de 5 x 5 enteros),fila,col,num_filas,num_cols (enteros) */
/* ################################################################################ */
#include<stdio.h>
int main() {
	int col;
	int fila;
	int matriz[5][15];
	int num_cols;
	int num_filas;
	num_filas = 5;
	num_cols = 15;
	for (fila=0;fila<=num_filas-1;fila++) {
		for (col=0;col<=num_cols-1;col++) {
			/* Si estoy en el extremo izquierdo, derecho, superior o inferior */
			if (fila==0 || fila==num_filas-1 || col==0 || col==num_cols-1) {
				/* Inicializo a 1 */
				matriz[fila][col] = 1;
			} else {
				/* SiNo inicializo a 0 */
				matriz[fila][col] = 0;
			}
		}
	}
	/* Recorro para mostrar la tabla. */
	for (fila=0;fila<=num_filas-1;fila+=1) {
		for (col=0;col<=num_cols-1;col+=1) {
			printf("%i",matriz[fila][col]);
		}
		printf("\n");
	}
	return 0;
}