#include <stdio.h>
void modificar(int variable);
int main()
{
int i = 1;
printf("\ni=%d antes de llamar a la función modificar\n", i);
modificar(i);
printf("\ni=%d después de llamar a la función modificar\n", i);
return 0;
}
void modificar(int variable)
{
printf("\nvariable = %d dentro de modificar\n", variable);
variable = 9;
printf("\nvariable = %d dentro de modificar\n", variable);
}