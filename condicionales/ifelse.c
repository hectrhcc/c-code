/* Uso de la sentencia condicional ELSE...IF. */

#include <stdio.h>

int main() /* Escribe bebé, niño o adulto */
{
int edad;
printf("Introduce tu edad: ");
scanf("%d",&edad);
if (edad<1)
printf("Lo siento, te has equivocado.\n");
else if (edad<3) printf("Eres un bebé\n");
else if (edad<13) printf("Eres un niño\n");
else printf("Eres adulto\n");
}