#include <stdio.h>

int main()
{
    int primeiroTermo = 0, razao = 0, soma = 0, loop = 10, inicio=1;

    printf(" PRIMEIRO TERMO: ");
    scanf("%d", &primeiroTermo);
    printf(" RAZAO: ");
    scanf("%d", &razao);

    for(inicio = 1 ; inicio <= loop; inicio++){
        printf(" %d ", primeiroTermo);
        soma = soma + primeiroTermo;
        primeiroTermo = primeiroTermo+=razao;

    }
    printf("\n");
    printf(" Soma Total: %d\n", soma);
    printf("\n");

    return 0;
}
