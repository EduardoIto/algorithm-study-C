#include <stdio.h>

int main()
{
    int numero = 100;

    while(numero >= 0){
        printf(" %d ", numero);
        numero = numero - 4;
        numero--;
    }

    printf(" Acabou!\n");

    return 0;
}
