#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double  peso, altura, imc;

    printf(" Digite sua altura: ");
    scanf("%lf", &altura);
    printf(" Digite seu peso: ");
    scanf("%lf", &peso);

    imc = peso / (altura * altura);

    printf(" Seu IMC = %.1lf\n", imc);

    if(imc < 18.5){
        printf(" ABAIXO DO PESO\n");
    }
    else if(imc >= 18.5 && imc <= 25){
        printf(" PESO IDEAL\n");
    }
    else if(imc >= 25 && imc <= 30){
        printf(" SOBREPESO\n");
    }
    else if(imc > 30 && imc <= 40){
        printf(" OBESIDADE\n");
    }
    else{
        printf(" OBESIDADE MORBIDA\n");
    }

    return 0;
}
