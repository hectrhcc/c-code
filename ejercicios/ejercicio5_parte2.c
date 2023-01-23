#include <stdio.h>

char caracter;
int main(){

printf("Ingrese un caracter:");
scanf("%c",&caracter);

switch(caracter){
case 'a': printf("Es una vocal \n");
break;
case 'e': printf("Es una vocal \n");
break;
case 'i': printf("Es una vocal \n");
break;
case 'o': printf("Es una vocal \n");
break;
case 'u': printf("Es una vocal \n");
break;
default: printf("Es una consonante\n");
}
}