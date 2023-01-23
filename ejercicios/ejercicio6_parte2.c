#include <stdio.h>

int main()
{
	char dato;
	printf("Ingresa una letra:");
	scanf("%c", &dato);
	if (dato >= 65 && dato <= 90)
		printf("la letra es mayuscula\n");
	else if (dato >= 97 && dato <= 122)
		printf("es una letra minuscula\n");
	else
		printf("es un caracter especial\n");
	return 0;
}