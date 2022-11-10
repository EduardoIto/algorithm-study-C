#include <stdio.h>

int main()
{
    int vet[10];
    int i, numero = 5, soma = 0;

    for(i = 0; i < 10; i++){
        soma = soma + numero;
        vet[i] = soma;
    }
    for(i = 0; i < 10; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n");

    return 0;
}
