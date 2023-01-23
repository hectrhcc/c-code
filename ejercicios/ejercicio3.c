#include <stdio.h>

int num;
int main(){
printf("Ingrese un numero entero:");	
scanf("%d",&num);
if (num>0) printf("El numero es positivo\n");
else if (num==0) printf("El numero es cero\n");
else printf("El numero es negativo\n");
}