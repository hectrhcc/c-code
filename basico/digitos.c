#include <stdio.h>

int digitos(int n){
	if (n==0) return 0;
	//printf("hola estoy dentro de la funcion %d\n", n);
	return 1+digitos(n/10);
}

main( int argc, char *argv[]){
	if ( argc > 1 ) {
		int n = atoi(argv[1]);  //conversion char to int
		printf("El número es %d\n", n);
		printf("La cantidad de dígitos es %d\n", digitos(n));
	}
}
