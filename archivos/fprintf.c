#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char buffer[100] = "Esto es un texto dentro del fichero.";
 	
 	fp = fopen ( "archivo.txt", "r+" );
 	
 	fprintf(fp, buffer);
 	fprintf(fp, "%s", "\nEsto es otro texto dentro del fichero.");
 	
 	fclose ( fp );
 	
 	return 0;
}