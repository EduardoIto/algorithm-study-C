#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int A, B, soma;

    printf("Digite um valor: ");
    scanf("%d", &A);
    printf("Digite outro valor: ");
    scanf("%d", &B);

    soma = A + B;

    printf("A soma entre %d e %d e igual a %d.\n", A, B, soma);

    return 0;
}
