#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double delt;
    int a, b, c;

    a = 0;
    b = 0;
    c = 0;

    printf(" Digite o valor de A: ");
    scanf("%d", &a);
    printf(" Digite o valor de B: ");
    scanf("%d", &b);
    printf(" Digite o valor de C: ");
    scanf("%d", &c);

    delt = (b * b) - ((4 * a) * c);

    printf(" Valor de DELTA = %.1lf\n", delt);

    return 0;

}
