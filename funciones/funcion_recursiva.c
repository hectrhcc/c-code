#include <stdio.h>

int factorial(int numero);

int main(){
int valor = 4;
int resultado;
resultado = factorial(valor);
printf("El factorial de %d es %d \n", valor, resultado);
return 0;
}

/* funcion No-recursiva
int factorial(int numero)
{
int i;
int devuelve = 1;
for(i = 1; i <= numero; i++)
{
devuelve = devuelve * i;
}
return devuelve;
}*/

int factorial(int numero)
{
if(numero == 1)
return 1;
else
return (numero * factorial(numero-1));
}

