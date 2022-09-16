#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tipoCarro;
    double diasAlugado, kmPercorrido, totalDias, totalKm;

    printf(" Qual tipo de carro alugado [1]POPULAR|[2]LUXO: ");
    scanf("%d", &tipoCarro);
    printf(" Quantos dias alugado: ");
    scanf("%lf", &diasAlugado);
    printf(" Quilometragem percorrida: ");
    scanf("%lf",&kmPercorrido);

    printf("\n");

    if(tipoCarro == 1){
        totalDias = diasAlugado * 90;
        printf(" Total do aluguel do veiculo = %.2lf Reais\n",totalDias);

        if(kmPercorrido <= 100){
        totalKm = kmPercorrido * 0.20;
        printf(" KM total = %.2lf Reais\n", totalKm);
        }
        else{
        totalKm = kmPercorrido * 0.10;
        printf(" KM total = %.2lf Reais\n", totalKm);
        }
    }

    if(tipoCarro == 2){
        totalDias = diasAlugado * 150;
        printf(" Total do aluguel do veiculo = %.2lf Reais\n",totalDias);

        if(kmPercorrido <= 200){
        totalKm = kmPercorrido * 0.30;
        printf(" KM total = %.2lf Reais\n", totalKm);
        }
        else{
        totalKm = kmPercorrido * 0.25;
        printf(" KM total = %.2lf Reais\n", totalKm);
        }
    }


    return 0;
}
