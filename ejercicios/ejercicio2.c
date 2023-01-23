#include<stdio.h>

float descuento,impuestos, num_hrs, sueldo_bruto, sueldo_liquido, valorhora;

int main() {
	
	printf("Ingrese numero de horas trabajadas:\n");
	scanf("%f",&num_hrs);
	printf("Ingrese valor hora:\n");
	scanf("%f",&valorhora);
	printf("Ingrese impuestos\n");
	scanf("%f",&impuestos);
	sueldo_bruto = num_hrs*valorhora;
	descuento = sueldo_bruto*valorhora; //el calculo es erroneo
	sueldo_liquido = sueldo_bruto-impuestos;
	printf("%f\n",sueldo_bruto);
	printf("%f\n",descuento);
	printf("%f\n",sueldo_liquido);
	return 0;
}

