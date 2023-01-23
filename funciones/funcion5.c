#include <stdio.h>
void unaFuncion();
void otraFuncion();
int variable;
int main()
{
variable = 9;
printf("El valor de variable es: %d\n", variable);
unaFuncion();
otraFuncion();
printf("Ahora el valor de variable es: %d\n", variable);
return 0;
}
void unaFuncion()
{
printf("En la función unaFuncion, variable es: %d\n", variable);
}
void otraFuncion()
{
variable++;
printf("En la función otraFuncion, variable es: %d\n",variable);
}