#include <stdio.h>

void main(){
	int x,*y, *z; // un puntero es una variable que contiene como valor una dirección de memoria
	x = 123; 
	y = &x; 
	z = &y;
	printf("valor de x:%d\n",x);
	printf("dirección de memoria de x:%d\n",&x);
	printf("\n");
	printf("valor de y:%d\n",y); // por definición
	printf("valor apuntado por y:%d\n",*y); //el operador de indirección permite obtener el contenido de un objeto apuntado por un puntero
	printf("dirección de memoria de y:%d\n",&y); //el operador & permite obtener la dirección que ocupa una variable en memoria
	printf("\n");
	printf("valor de z:%d\n",z);
	printf("valor apuntado por z:%d\n",*z);
	printf("dirección de memoria de z:%d\n",&z);
	printf("\n");
	//printf("primer printf:%d\n",&z); // primer printf
	//printf("**z:%d\n",**z); // segundo printf
}
