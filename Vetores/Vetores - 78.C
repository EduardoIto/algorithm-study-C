#include <stdio.h>

int main()
{
    int vet[15];
    int i;

    for(i = 1; i < 15; i++){
        printf(" Digite o %do numero: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\n");
    printf(" Numeros digitados: ");

    for(i = 1; i < 15; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n");
    printf("\n Os numeros multiplos por 10 sao: \n");

    for(i = 1; i < 15; i++){
        if(vet[i] % 10 == 0){
            printf(" %do numero = %d \n", i, vet[i]);
        }
    }

    return 0;
}
