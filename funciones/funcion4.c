#include <stdio.h>
void imprimeValor();
int main()
{
int contador = 0;
contador++;
printf("El valor de contador es: %d\n", contador);
imprimeValor();
printf("Ahora el valor de contador es: %d\n", contador);
return 0;
}
void imprimeValor()
{
int contador = 5;
printf("El valor de contador es: %d\n", contador);
}