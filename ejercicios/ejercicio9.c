#include <stdio.h>
#include<math.h>
/* Por la libreria math para compilar este código manualmente :
   gcc ejercicio8.c -o ejercicio8 -lm 
*/
int opcion, num1, num2, suma, resta, mult, div;
//float exp;
int main(){
printf("================\n");
printf("Menu de opciones\n");	 
printf("================\n");
printf("1) Suma\n");
printf("2) Resta\n");
printf("3) Multiplicación\n");
printf("4) Division\n");
printf("5) Exponenciacion\n");
printf("Ingrese una opcion:");
scanf("%d",&opcion);
switch(opcion){
case 1:printf("Ingrese numero 1:");
	  scanf("%d",&num1);
	  printf("Ingrese numero 2:");
	  scanf("%d",&num2);
	  suma=num1+num2;
	  printf("La suma es:%d\n",suma);
	  break;
case 2:printf("Ingrese numero 1:");
	  scanf("%d",&num1);
	  printf("Ingrese numero 2:");
	  scanf("%d",&num2);
	  resta=num1-num2;
	  printf("La resta es:%d\n",resta);
	  break;
case 3:printf("Ingrese numero 1:");
	  scanf("%d",&num1);
	  printf("Ingrese numero 2:");
	  scanf("%d",&num2);
	  mult=num1*num2;
	  printf("La Multiplicacion es:%d\n",mult);
	  break;
case 4:printf("Ingrese numero 1:");
	  scanf("%d",&num1);
	  printf("Ingrese numero 2:");
	  scanf("%d",&num2);
	  if (num2==0) printf("Division por cero indeterminada\n");
	  else {div=num1/num2;// llaves para que tome 2 lineas (la division y el printf)
	  printf("La Division es:%d\n",div);}
	  break;
case 5:printf("Ingrese numero 1:");
	  scanf("%d",&num1);
	  printf("Ingrese numero 2:");
	  scanf("%d",&num2);
	  //exp=pow(num1,num2);
	  printf("La exponenciacion es:%f\n",pow(num1,num2));
	  break;
default: printf("Opcion ingresada no valida\n");
}

}