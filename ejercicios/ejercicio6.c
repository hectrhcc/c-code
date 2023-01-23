#include <stdio.h>
int n;
int main(){
printf("Ingrese un valor: \n");
scanf("%d", &n);
if (n % 8 ==0) printf("Es multiplo de 8\n");
else printf("No es multiplo de 8\n");
}