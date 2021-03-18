#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double valor, desconto, total;

    valor = 0;
    desconto = 0;
    total = 0;

    printf(" Digite o valor do produto: ");
    scanf("%lf", &valor);

    desconto = (valor * 5)/100;
    total = valor - desconto;
    printf(" PRECO PROMOCIONAL: %.2lf\n", total);


    return 0;

}
