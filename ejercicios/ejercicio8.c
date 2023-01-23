#include<stdio.h>
#include<math.h>
/* Para compilar este código manualmente:
   gcc ejercicio8.c -o ejercicio8 -lm
*/
float cateto1,cateto2,hipotenusa;
int main() {
	
	printf("Ingrese el valor del primer cateto:");
	scanf("%f",&cateto1);
	printf("Ingrese el valor del segundo cateto:");
	scanf("%f",&cateto2);
	hipotenusa = sqrtf(pow(cateto1,2)+pow(cateto2,2));
	printf("El valor de hipotenusa es: %f\n",hipotenusa);
	return 0;
}

