#include <stdio.h>
void unaFuncion();
void otraFuncion();
int main()
{
extern variable;
variable = 9;
printf("El valor de variable es: %d\n", variable);
unaFuncion();
printf("Ahora el valor de variable es: %d\n", variable);
return 0;
}
void unaFuncion()
{
extern variable;
printf("En la función unaFunción, variable es: %d\n", variable);
}
int variable;