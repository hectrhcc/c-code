/*
Programa que obtenga el dígito
verificador de un RUT Chileno.
*/
#include <stdio.h>

int rut, pa, c, sum, a1, di, digi;
int main(){
  printf("Este programa define su dígito verificador \n");
  printf("Ingrese su rut sin el dígito verificador \n");
  scanf("%d", &rut);
  pa=rut;
  c=2;
  sum=0;
  while (rut>0) {
    a1=rut%10;
    rut=(int)rut/10;
    sum+=(a1*c);
    c++;
    if (c==8) {
      c=2;
    }
  }
  di =sum%11;
  digi= 11-di;
  switch(digi){
  case 11:printf("El dígito verificador es 0\n");printf("%d", pa);printf("-0\n");   
  break;
  case 10:printf("El dígito verificador es K\n");printf("%d", pa);printf("-K\n");
  break;
  default:printf("El dígito verificador es %d\n",digi);printf("%d", pa);printf("-%d\n",digi);
  } 
}