#include <stdio.h>

int main()
{
    int vet[10];
    int i, N1 = 5, N2 = 3;

    for(i = 0; i < 10; i++){
        if(i % 2 == 0){
            vet[i] = N1;
        }
        else{
            vet[i] = N2;
        }
    }
    for(i = 0; i < 10; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n");

    return 0;
}
