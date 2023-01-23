#include <stdio.h>

int main(int argc, char const *argv[])
{
	char dato;
	printf("Ingresa un caracter\n");
	scanf("%c", &dato);
	//Valores según TABLA ASCII
	if (dato >= 48 && dato <=57) //rango de números
		printf("es un digito \n");
	else if (dato >= 65 && dato <= 122) // rango de letras
		printf("es una letra \n");
	else if (dato=='ñ') // la letra Ñ no esta en la tabla 
		printf("es una letra \n"); //no entra en esta línea
	else if (dato<48 || dato>122) //ejemplo: espacio enter ( ...
		printf("otro carácter distinto de dígito y letra\n");
	return 0;
}