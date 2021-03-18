#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double largura, altura, areaPintada, quant;


    largura = 0;
    altura = 0;
    areaPintada = 0;
    quant = 0;

    printf(" Qual a largura da parede?: ");
    scanf("%lf", &largura);
    printf(" Qual a altura da parede?: ");
    scanf("%lf", &altura);

    areaPintada = largura * altura;
    printf(" A area a ser pintada e de %.2lf m2\n", areaPintada);
    quant = areaPintada/2;
    printf(" A quantidade de tinta ser de %.2lf litros\n", quant);


    return 0;

}
