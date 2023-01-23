#include <stdio.h>

int main(void)
{
	char hileraA[80] = "Esto es una prueba de arreglos de caracteres";
	char hileraB[80];

    char *pa;     
    char *pb;     
    puts(hileraA);   
    pa = hileraA;    
    puts(pa);  
    pb = hileraB;   
    putchar('\n');  
    while(*pa != '\0')
    {
        *pb++ = *pa++;   
    }
    *pb = '\0';         
    puts(hileraB);          
    return 0;
}