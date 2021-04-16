#include <stdio.h>

int main()
{
    int vet[10];
    int i;

    for(i = 1; i < 10; i++){
        printf(" Digite %do valor: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\n Numeros pares digitados sao:\n");

    for(i = 1; i < 10; i++){
        if(vet[i] % 2 == 0){
            printf(" O %do numero = %d \n", i, vet[i]);
        }
    }

    return 0;
}
