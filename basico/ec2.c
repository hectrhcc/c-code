// RESUELVA LA ECUACION CUADRATICA
/* PARA COMPILAR ESTE CODIGO :
gcc ec2.c -o ec2 -lm */
#include <stdio.h>
//#include <conio.h>
#include <math.h>
//#include <curses.h>
int main(int argc, char const *argv[])
{
	float a, b, c, x1, x2, d;
	printf("Dame los valores a, b, c \n<");
	scanf("%f %f %f", &a, &b, &c);
	if (a != 0)
	{
		d = b * b - 4 * a * c ;
		if (d > 0)
		{
			x1 = (- b + sqrt(d)) / (2 * a);
			x2 = (- b - sqrt(d)) / (2 * a);
			printf("Las raices son: %f, %f \n", x1, x2);
		}
		else if (d == 0)
		{
			x1 = - b / (2 * a);
			printf("Raices repetidas = %f\n", x1);
		}
		else
		{
			x1 = - b / (2 * a);
			x2 = sqrt(fabs(d)) / (2 * a);
			printf("Raices complejas: %f + - %f\n", x1, x2);
		}
	}
	else
		printf("No es ecuacion cuadratica\n");
	//getch();
	return 0;
}