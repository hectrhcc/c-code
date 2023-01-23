/*Que rellene una matriz de 3x3 y muestre su traspuesta. 
La traspuesta se consigue:
intercambiando filas por columnas y viceversa).*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int x,y,num=0, numeros[4][4];
   
    for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            numeros[x][y]=num;
            num++;
        }
    }
   
    printf("El array original es: \n\n\n");
   
    for(x = 0;x < 3;x++)
    {
      for(y = 0;y < 3;y++)
      {
          printf("    %d     ", numeros[x][y]);
      }
      printf("\n\n\n");
    }
   
    printf("La traspuesta es: \n\n\n");
   
    for(x = 0;x < 3;x++)
    {
      for(y = 0;y < 3;y++)
      {
          printf("    %d     ", numeros[y][x]);
      }
      printf("\n\n\n");
    }
      
    return 0;
}
