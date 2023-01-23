/* Uso de la sentencia WHILE. */

#include <stdio.h>

int main() /* Escribe los números del 1 al 10 */
{
int i =1 ,numero;
printf("Ingrese el limite de los numeros:");
scanf("%d",&numero);
while(i<=numero)
{
printf("%d\n",i);
i++;
}
}
