#include<stdlib.h>
#include<stdio.h>


int main(){

char respuesta;

printf("Desea quedarse en casa esta noche? s o n \n");
scanf("%c",&respuesta);


    if(respuesta=='s'){

        printf("le gusta ver tv? \n");
        scanf("%c",&respuesta);
        if(respuesta=='s'){

            printf("hay algun programa bueno hoy?\n");
            scanf("%c",&respuesta);
            if(respuesta=='s'){
                printf("compre cabritas y vea el programa\n");
            }
            else{
                printf("vaya a arrendar una pelicula\n");

            }
        }
        else{
            printf("le gusta leer? \n");
            scanf("%c",&respuesta);
            if(respuesta=='s'){
                printf("tome un libro y pongase a leer\n");
            }else{
                printf("vayase a dormir\n");

            }

        }
    }
    else{

        printf("le gusta bailar?\n");
        scanf("%c",&respuesta);
        if(respuesta=='s'){
            printf("le gusta la musica disco?\n");
            scanf("%c",&respuesta);
            if(respuesta=='s'){
                printf("vaya a la disco los 80\n");
            }else{
                printf("vayase a la disco reguetonera\n");
            }
        }else{
            printf("le gusta el cine?\n");
            scanf("%c",&respuesta);
            if(respuesta=='s'){
                printf("le gusta marvel\n");
                scanf("%c",&respuesta);
                if(respuesta=='s'){
                    printf("vaya a ver los vengadores\n");

                }
                else{
                    printf("vaya a ver el joker\n");
                }
            }
            else{
                printf("vaya a hacer tutito\n");
            }

        }
    }




}
