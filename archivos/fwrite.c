#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char cadena[] = "Mostrando el uso de fwrite en un fichero.\n";
 	
 	fp = fopen ( "archivo.txt", "r+" );
 	
 	fwrite( cadena, sizeof(char), sizeof(cadena), fp ); //char cadena[]... cada posición es de tamaño 'char' 
 	
 	fclose ( fp );
 	
 	return 0;
}