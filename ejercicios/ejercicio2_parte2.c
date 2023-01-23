#include <stdio.h> 
main() 
{

int i=4, x=5; 
for(i=0; i<10; i++){ 
if(i<x) 
printf("%d ",i); 
else 
printf("%d ",i-x); 
}
}