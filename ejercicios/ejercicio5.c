#include <stdio.h>
#include<math.h>
/* Por la libreria math para compilar este código manualmente :
   gcc ejercicio5.c -o ejercicio5 -lm 
*/
int num1, num2, f;
int main(){
printf("Ingrese numero 1:");
scanf("%d",&num1);
printf("Ingrese numero 2:");
scanf("%d",&num2);
f= 4*pow(num1,2) + 5*num2;
printf("Resultado: %d\n",f);

}