#include <stdio.h>

int main()
{
    int vet[8];
    int i;

    for(i = 0; i < 8; i++){
        vet[i] = 999;
    }

    for(i = 0; i < 8; i++){
        printf( " %d ", vet[i]);
    }

    printf("\n");

    return 0;
}
