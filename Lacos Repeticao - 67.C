#include <stdio.h>

int main()
{
    int numero = 0, loop = 0;

    printf(" Digite um numero: ");
    scanf("%d", &numero);

    for(loop = 0; loop <= numero; loop++){
        printf(" %d ", loop);

    }
    printf("\n");

    return 0;
}
