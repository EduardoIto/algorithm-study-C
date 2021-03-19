#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int dias;
    double salario;

    dias = 0;
    salario = 0;

    printf(" Quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    salario = dias * 200;

    printf(" Salario total = %.2lf\n", salario);

    return 0;
}


