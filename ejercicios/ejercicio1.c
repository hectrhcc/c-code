#include<stdio.h>
int contador,n,num,suma;

int main() {	
	printf("Cuantos numeros desea sumar? ");
	scanf("%d",&n);
	suma = 0;
	for (contador=1;contador<=n;contador++) {
		printf("Ingrese numero:");
		scanf("%i",&num);
		suma = suma+num;
	}
	printf("La suma de los %i ",n);
	printf("numeros es:%d \n",suma);
	return 0;
}