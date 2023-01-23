#include <stdio.h>

int valor;
int main(){
printf("Ingrese un valor:");
scanf("%d",&valor);
if (valor ==0) printf("lo siento aun no se ponen de acuerdo\n");
else if (valor % 2 ==0) printf("es par\n");
else printf("es impar\n");
}