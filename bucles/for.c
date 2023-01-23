/* Uso de la sentencia FOR. */

#include <stdio.h>

int main() /* Escribe la tabla de multiplicar */
{
int num,x,result;
printf("Introduce un número: ");
scanf("%d",&num);
for (x=0;x<=10;x++){
result=num*x;
printf("\n%d por %d = %d\n",num,x,result);
}
}