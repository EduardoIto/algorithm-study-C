#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double X, US;

    printf(" Quantos reais vc tem?: ");
    scanf("%lf", &X);

    US = X / 3.45;

    printf(" Voce pode comprar US$ %.2lf\n ", US);


    return 0;

}
