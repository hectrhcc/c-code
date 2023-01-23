/*	Ejercicio 8. Oprimir una tecla e imprimir qué tipo de tecla es (letra mayúscula,
 letra minúscula, dígito o carácter especial).	*/
#include <stdio.h>
//#include <conio.h>

int main(int argc, char const *argv[])
{
	char dato;
	char c;
	//while(c!='0') //getchar()) 
	//{
	printf("oprime una tecla\n");

	scanf("%c", &dato);
	if (dato >= 48 && dato <=57)
		printf("es un digito \n");
	else if (dato >= 65 && dato <= 90)
		printf("la letra es mayuscula\n");
	else if (dato >= 97 && dato <= 122)
		printf("es una letra minuscula\n");
	else if (dato>122)
		printf("es un caracter especial\n");
	c=dato;
	//printf("c == dato %c \n", dato);
	//printf("c == dato %c \n", c);
	//}
	//getch();
	return 0;
}