#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double largura, comprimento, area;

    printf(" Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf(" Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    area = largura * comprimento;
    printf(" A area do terreno e %.2lf m2.\n", area);

    if(area > 500){
        printf(" TERRENO VIP\n");
    }
    else if(area >= 100 && area <= 500){
        printf(" TERRENO MASTER\n");
    }
    else{
        printf(" TERRENO POPULAR\n");
    }

    return 0;
}
