#include <stdio.h>

int main()
{
    char vet[8][15];
    int i;

    for(i = 0; i < 8; i++){
        printf(" NOME %d: ", i);
        scanf("%s", vet[i]);
    }

    printf("\n");

    for(i = 8; i >= 0; i--){
        printf(" %s \n", vet[i]);
    }

    return 0;
}
