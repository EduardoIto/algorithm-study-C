#include <stdio.h>

int main()
{
    int vet[10];
    int i=9;

    for(i = 9; i >= 0; i--){
        vet[i] = i;
    }
    for(i = 9; i >= 0; i--){
       printf(" %d ", vet[i]);
    }
    printf("\n");


    return 0;
}
