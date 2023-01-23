#include <stdio.h>

float euro, dolar;
int main(){
printf("Ingrese dolares:");
scanf("%f",&dolar);
// 1 = 133250     x= 100/133250
// x =  100 USD
euro= dolar/1.33250;
printf("Euros:%f\n", euro);

}