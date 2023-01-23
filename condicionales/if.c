/* Uso de la sentencia condicional IF. */

#include <stdio.h>

int main() /* Simula una clave de acceso */
{
int usuario,clave=18276;
printf("Introduce tu clave: ");
scanf("%d",&usuario);
if(usuario==clave)
printf("Acceso permitido\n\n");
else
printf("Acceso denegado\n\n");
}
