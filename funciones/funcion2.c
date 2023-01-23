#include <stdio.h>
int cubo(int base);
int main()
{
int numero;
for(numero=1; numero<=5; numero++){
printf("El cubo del número %d es %d\n", numero, cubo(numero));
}
return 0;
}
int cubo(int base)
{
int potencia;
potencia = base * base * base;
return potencia;
}