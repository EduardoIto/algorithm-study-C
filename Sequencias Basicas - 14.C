#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double km, totalDia, totalKm, totalGeral;
    int dias;

    km = 0;
    totalDia = 0;
    totalKm = 0;
    totalGeral = 0;
    dias = 0;

    printf(" Qual a KM total?: ");
    scanf("%lf", &km);
    printf(" Quantos dias alugado?: ");
    scanf("%d", &dias);

    totalKm = km * 0.20;
    totalDia = dias * 90;
    totalGeral = totalKm + totalDia;

    printf(" TOTAL A PAGAR = %.2lf\n", totalGeral);

    return 0;

}
