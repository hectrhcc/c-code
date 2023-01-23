#include <stdio.h>

void main(){
int x;
int *px =&x;
char a[25];
char *pa = &a;
printf("ingrese el numero a guardar \n");
scanf("%i", &x);
printf("El valor del numero a guardar es: %i\n", x);
//printf("El valor del numero a guardar es: %d\n", &x); ASI NO SE HACE
printf("La dirección de memoria de la variable x: %p\n", px); // 0x7fffbfb2402c  WTF    
printf("La dirección de memoria de la variable x: %d\n", px); // -1078837204
printf("ingrese una cadena a guardar \n");
scanf("%s", a);
printf("El valor de la cadena a guardar es: %s\n", a);
//printf("El valor de la cadena a guardar es: %s\n", &a); ASI TAMPOCO
printf("La dirección de memoria de la cadena es: %p\n", pa);
}
