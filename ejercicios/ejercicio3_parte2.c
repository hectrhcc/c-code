#include <stdio.h>
#include <string.h>
char palabra[20];
char palabra2[20];
int main(){

printf("Ingrese una palabra:");
scanf("%s", palabra);
printf("Ingrese otra palabra:");
scanf("%s", palabra2);

if (strlen(palabra)>strlen(palabra2)) printf("la primera palabra es mas larga\n");
else if (strlen(palabra)==strlen(palabra2)) printf("las palabras tienen la misma longitud\n");
else printf("la segunda palabra es mas larga\n");

}