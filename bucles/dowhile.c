#include <stdio.h>

int main() {    /* visualizar los números del 0 al .*/

    int digito=1, numero;
    printf("Ingrese el limite de los numeros:");
	scanf("%d",&numero);
    do
        printf("%d\n",digito++); while (digito<=numero);

}
