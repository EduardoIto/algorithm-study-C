#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int X, A, S;

    printf(" Digite um numero: ");
    scanf("%d", &X);

    A = X - 1;
    printf(" O antecessor de %d e %d.\n", X, A);
    S = X + 1;
    printf(" O sucessor de %d e %d.\n", X, S);

    return 0;
}
