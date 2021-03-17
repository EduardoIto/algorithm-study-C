#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double A, B, media;

    printf(" Nota 1: ");
    scanf("%lf", &A);
    printf(" Nota 2: ");
    scanf("%lf", &B);

    media = (A + B)/2;

    printf(" A media enter %.1lf e %.1lf e igual a %.1lf.\n", A, B, media);


    return 0;
}
