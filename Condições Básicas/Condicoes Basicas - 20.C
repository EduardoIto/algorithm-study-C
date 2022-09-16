#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numero;

    printf(" Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf(" Numero digitado e PAR\n");
    }
    else{
        printf(" Numero digitado e IMPAR\n");
    }

    return 0;
}
