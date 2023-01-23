/*Crea un programa que vaya leyendo las frases que el usuario teclea y las guarde en un fichero
de texto llamado “registroDeUsuario.txt”. Terminará cuando la frase introducida sea "fin" (esa frase
no deberá guardarse en el fichero).*/
#include <stdio.h>
#include <string.h>
 
int main()
{
   FILE* ptFichero;
   char fin[]="fin";  
   char frase[60];
       
   ptFichero = fopen("registroDeUsuario.txt", "wt");
   printf(" PROGRAMA para ESCRIBIR FRASES.\nCuando quiera salir," 
          "escriba la palabra fin.\n\n");
   do
   {
      puts("\nEscriba una FRASE:\n(o fin). \n");
      gets(frase);
      if (strcmp(frase, fin) == 0)
         break;
      fprintf(ptFichero, "%s\n", frase);
   }
   while (strcmp(frase, fin) != 0);
      
   fclose(ptFichero);
   return 0;
}