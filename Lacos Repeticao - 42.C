#include <stdio.h>

int main()
{
    int numero, inicio = 1;

    printf(" Digite um valor: ");
    scanf("%d", &numero);

    while(inicio <= numero){
        printf(" %d ", inicio);
        inicio++;
    }

    printf(" Acabou!\n");

    return 0;
}
