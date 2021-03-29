#include <stdio.h>

int main()
{
    int numero = 30;

    while(numero >= 1){
        if(numero % 4 == 0){
            printf(" [%d] ", numero);
        }
        else{
            printf(" %d ", numero);
        }
    numero--;
    }

    printf(" Acabou!\n");

    return 0;
}
