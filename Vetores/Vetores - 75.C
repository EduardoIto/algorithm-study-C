#include <stdio.h>

int main()
{
    int vet[16];
    int i, atual = 1, proximo = 1, soma = 0;

    for(i = 0; i < 16; i++){
        vet[i] = atual;
        soma = atual + proximo;
        atual = proximo;
        proximo = soma;
    }
    for(i = 0; i < 16; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n");

    return 0;
}
