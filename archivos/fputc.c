#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char caracter;
 		
 	fp = fopen ( "archivo.txt", "a+t" ); //parámetro para escritura al final y para file tipo texto
 	
 	printf("\nIntroduce un texto al fichero: ");
 	
 	while((caracter = getchar()) != '\n')
 	{
 		printf("%c", fputc(caracter, fp));
 	}
 	
 	fclose ( fp );
 	
 	return 0;
}