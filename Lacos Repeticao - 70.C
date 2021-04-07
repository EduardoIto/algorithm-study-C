#include <stdio.h>

int main()
{
    int inicio, loop = 10, numProximo, numAtual, soma;

    numAtual = 1;
    numProximo = 1;
    soma = 0;

    printf("          **FIBONACCI**\n");

    for(inicio = 1 ; inicio <= loop; inicio++){
        printf(" %d ",numAtual);

        soma = numAtual + numProximo;
        numAtual = numProximo;
        numProximo = soma;

    }
    printf("\n");

    return 0;
}
