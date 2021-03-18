#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double salario, aumento, total;

    salario = 0;
    aumento = 0;
    total = 0;

    printf(" SALARIO = ");
    scanf("%lf", &salario);

    aumento = (salario * 15) / 100;
    total = aumento + salario;

    printf(" NOVO SALARIO = %.2lf\n", total);

    return 0;
}
