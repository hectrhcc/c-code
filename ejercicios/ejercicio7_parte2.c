#include <stdio.h>
float percent_reprob_a, percent_aprob_b, percent_reprob_ab;
int  num_alum_reprob_a, num_alum_aprob_b, num_alum_reprob_b,
 num_total_alum_reprob,num_alum_aprob_a, num_total_alum_aprob;
int main(){
//Datos de entrada
printf("El porcentaje de alumnos reprobados del curso A :");
scanf("%f",&percent_reprob_a );
printf("El porcentaje de alumnos aprobados del curso B :");
scanf("%f",&percent_aprob_b);
//a
num_alum_reprob_a = (int)( (percent_reprob_a*60)/100);
num_alum_aprob_b = (int)((percent_aprob_b* 20)/100);

//b

num_alum_reprob_b = 20 - num_alum_aprob_b;

//c
num_total_alum_reprob =  num_alum_reprob_b + num_alum_reprob_a;
percent_reprob_ab =  (num_total_alum_reprob *100) / 80;

//d
num_alum_aprob_a = 60 - num_alum_reprob_a;
num_total_alum_aprob =  num_alum_aprob_b + num_alum_aprob_a;

//Salida de datos
printf(" El número de alumnos reprobados del curso A: %i\n",num_alum_reprob_a );

printf(" El número de alumnos reprobados del curso B: %i\n", num_alum_reprob_b );
printf(" El porcentaje de alumnos reprobados en relacion a los 2 cursos: %f\n",percent_reprob_ab );
printf(" El numero total de alumnos aprobados: %i\n", num_total_alum_aprob);
}