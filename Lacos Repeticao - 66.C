#include <stdio.h>

int main()
{
    int numero, loop = 1, mult = 0;

    printf(" Digite um numero de 1 a 10: ");
    scanf("%d", &numero);

    for(numero; loop <= 10; loop++){
        mult = numero * loop;
        printf(" %d X %d = %d\n", numero, loop, mult);
    }

    return 0;
}
