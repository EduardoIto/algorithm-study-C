#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int kmh;
    double multa;

    kmh = 0;
    multa = 0;

    printf("Qual a velocidade atingida?: ");
    scanf("%d", &kmh);

    if (kmh > 80){
        printf("Voce foi multado!\n");
        multa = (kmh - 80) * 5;
        printf("Valor da Multa e de RS %.2lf\n", multa);
    }
    else{
        printf("Parabens voce esta dentro do limite de velocidade!\n");
    }

    return 0;

}
