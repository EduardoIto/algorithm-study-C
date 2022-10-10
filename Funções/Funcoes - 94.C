#include <stdio.h>

int fibonacci(int elemento){

 int inicio, loop = elemento, numProximo, numAtual, soma;

    numAtual = 1;
    numProximo = 1;
    soma = 0;

    printf("\n **FIBONACCI**\n");

    for(inicio = 1 ; inicio <= loop; inicio++){
        printf(" %d >>",numAtual);

        soma = numAtual + numProximo;
        numAtual = numProximo;
        numProximo = soma;

    }
    printf(" FIM\n");

}


int main()
{
    int elemento;

    printf(" Digite a quantidade de elementos: ");
    scanf("%d", &elemento);

    fibonacci(elemento);


    return 0;
}
