#include <stdio.h>

void calculadora(int num1,int num2,int operacion);

int main(){
	int valor1=0;
	int valor2=0;
	int operacion;
	while (operacion!=0)
	{
	printf("Ingrese el primer valor ");
	scanf("%i",&valor1);
	printf("Ingrese el segundo valor ");
	scanf("%i",&valor2);
	printf("Ingrese el tipo de operacion que desea realizar, para multiplicacion(1),division(2),suma(3),resta(4) ");
	scanf("%i",&operacion);
	if (operacion==0){ break;}
	calculadora(valor1,valor2,operacion);
	}
	return 0;
	}
	

void calculadora(int num1,int num2,int operacion){
	switch(operacion){
		case 1:
			printf("El resultado es %i\n",num1*num2);
			break;
		case 2:
			if(num2!=0)
			printf("El resultado es %i\n",num1/num2);
			else
			printf("No se puede dividir entre cero");
			break;
		case 3:
			printf("El resultado es %i\n",num1+num2);
			break;
		case 4:
			printf("El resultado es %i\n",num1-num2);
			break;
		default:
			printf("La operacion no es valida\n");
		}
	}