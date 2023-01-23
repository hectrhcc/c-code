#include <stdio.h>
#include <math.h>
/* Por la libreria math para compilar este código manualmente :
   gcc ejercicio8.c -o ejercicio8 -lm 
*/
float valor_alto_piso,valor_ancho_piso,valor_largo_piso;
float valor_alto_puerta,valor_ancho_puerta, valor_alto_ventana;
float valor_radio_respiradero,area_piso1_frontal;
float area_piso2_frontal,area_piso3_frontal,area_piso4_frontal; 
float area_total_frontal_atras,area_techo, area_lado_piso1; 
float area_lado_piso2,area_lado_piso3,area_lado_piso4;
float area_costado_total, area_total_edificio;
int cantidad_tarros;
int main(){
//Ingreso de datos
 printf("Ingrese valor para el alto del piso:");
 scanf("%f",&valor_alto_piso);
 printf("Ingrese valor para el ancho del piso:");
 scanf("%f",&valor_ancho_piso);
 printf("Ingrese valor para el largo del piso:");
 scanf("%f",&valor_largo_piso);
 printf("Ingrese valor para el alto de la puerta:");
 scanf("%f",&valor_alto_puerta);
 printf("Ingrese valor para el ancho de la puerta:");
 scanf("%f",&valor_ancho_puerta);
 printf("Ingrese valor para alto de la ventana:");
 scanf("%f",&valor_alto_ventana);
 printf("Ingrese valor para el radio del respiradero:");
 scanf("%f",&valor_radio_respiradero);
//Calculo de las areas
//Parte frontal
area_piso1_frontal = valor_ancho_piso * valor_alto_piso - ( valor_ancho_puerta*valor_alto_puerta);
area_piso2_frontal =  valor_ancho_piso * valor_alto_piso - ( pow(valor_alto_ventana,2)*4);
area_piso3_frontal =  valor_ancho_piso * valor_alto_piso - ( pow(valor_alto_ventana,2)*4);
area_piso4_frontal =  valor_ancho_piso * valor_alto_piso - ( pow(valor_alto_ventana,2)*4);

area_total_frontal_atras = (area_piso1_frontal + area_piso2_frontal + area_piso3_frontal + area_piso4_frontal) *2;

//Techo
area_techo = valor_ancho_piso * valor_largo_piso;
 
//Costado
area_lado_piso1 = valor_largo_piso * valor_alto_piso;
area_lado_piso2 = valor_largo_piso * valor_alto_piso - ( 3.1415* pow(valor_radio_respiradero,2 ));
area_lado_piso3 = valor_largo_piso * valor_alto_piso - ( 3.1415* pow(valor_radio_respiradero,2 ));
area_lado_piso4 = valor_largo_piso * valor_alto_piso - ( 3.1415* pow(valor_radio_respiradero,2 ));
area_costado_total = (area_lado_piso4 + area_lado_piso3 + area_lado_piso2 + area_lado_piso1) *2;

area_total_edificio = area_costado_total + area_techo + area_total_frontal_atras;
cantidad_tarros = (int)(area_total_edificio/3);
printf("La cantidad de tarros es:%d\n", cantidad_tarros);
}