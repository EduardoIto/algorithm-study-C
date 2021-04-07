#include <stdio.h>

int main()
{
    int loop;
    char sexo;
    double peso = 0, totalPesoMulheres = 0, totalMulheres = 0, totalAcimaCem = 0, maiorPesoHomens = 0, mediaMulheres = 0;

    for(loop = 1; loop <= 8; loop++){
        printf(" SEXO[M]/[F]: ");
        scanf("%c", &sexo);
        printf(" PESO: ");
        scanf("%lf", &peso);
        fseek(stdin,0,SEEK_END);
        printf("\n");

        if(sexo == 'f'){
            totalPesoMulheres = totalPesoMulheres + peso;
            totalMulheres = totalMulheres + 1;
        }
        else if(sexo == 'm' && peso > 100){
            totalAcimaCem = totalAcimaCem + 1;
        }
        if(sexo == 'm' && peso > maiorPesoHomens){
                maiorPesoHomens = peso;
        }

    }

    mediaMulheres = totalPesoMulheres / totalMulheres;

    printf(" Total de mulheres cadastradas = %.0lf\n", totalMulheres);
    printf(" Total de homens acima de 100Kg = %.0lf\n", totalAcimaCem);
    printf(" Media de peso entre as mulheres = %.1lf Kg\n", mediaMulheres);
    printf(" Maior peso entre os homens = %.1lf Kg\n", maiorPesoHomens);

    return 0;
}
