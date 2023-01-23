#include <stdio.h>
int num;
int main (){
	
printf("Esto es un prueba:\n");
printf("Ingrese un numero:\n");
scanf("%d", &num);
if (num>10){
	printf("Numero mayor que 10\n");
	if (num>100){
		printf("Numero mayor que 100\n");
	}
	else{
	printf("Numero menor que 100\n");	
	}
}

}
