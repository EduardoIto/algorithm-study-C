#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   double X, D, T;

    printf(" Digite um numero: ");
    scanf("%lf", &X);

    D = X * 2;
    printf(" O dobro de %.1lf e %.1lf.\n", X, D);
    T = X / 3;
    printf(" A terca parte de %.1lf e %.1lf.\n", X, T);

    return 0;

}
