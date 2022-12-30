#include <stdio.h>

int main()
{
    int vet[11];
    int i, j, aux = 0;

    for(i = 1; i < 11; i++){
        printf(" %do numero: ", i);
        scanf("%d", &vet[i]);
    }
    for(i = 1; i < 11; i++){
        printf(" Numeros digitados: %d;", vet[i]);
    }

    printf("\n");

    for(i = 1; i < 11; i++){
        for(j = 1; j < 11; j++){
            if(vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    printf("\n");

    for(i = 1; i < 11; i++){
        printf(" %d;", vet[i]);
    }

    return 0;
}
