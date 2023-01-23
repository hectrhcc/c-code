
/* Uso de la sentencia condicional SWITCH. */

#include <stdio.h>

int main() /* Escribe el día de la semana */
{
int dia;
printf("Introduce el día: ");
scanf("%d",&dia);
switch(dia){
case 1: printf("Lunes \n"); //break;
case 2: printf("Martes \n"); //break;
case 3: printf("Miércoles \n");//break;
case 4: printf("Jueves \n"); //break;
case 5: printf("Viernes \n"); //break;
case 6: printf("Sábado \n"); //break;
case 7: printf("Domingo \n"); //break;
}
}