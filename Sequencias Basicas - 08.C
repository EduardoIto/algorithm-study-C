#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  double X, KM, HM, DAM, DM, CM, MM;

    printf(" Digite a distancia em metros: ");
    scanf("%lf", &X);
    printf(" A distancia de %.1lfm correponde a: \n", X);

    KM = X / 1000;
    printf(" %.5lf Km \n", KM);

    HM = X / 100;
    printf(" %.4lf Hm \n", HM);

    DAM = X / 10;
    printf(" %.3lf Dam \n", DAM);

    DM = X * 10;
    printf(" %.1lf Dm \n",DM);

    CM = X * 100;
    printf(" %.1lf cm \n", CM);

    MM = X * 1000;
    printf(" %.1lf mm \n", MM);

    return 0;

}
