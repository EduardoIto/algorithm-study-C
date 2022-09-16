#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double valorImovel, salarioComprador, anos, comprometer, totalMeses, valorMes;

    printf(" Valor do imovel: ");
    scanf("%lf", &valorImovel);
    printf(" Salario do comprador: ");
    scanf("%lf", &salarioComprador);
    printf(" Quanto anos deseja financiar: ");
    scanf("%lf", &anos);

    totalMeses = anos * 12;
    comprometer = (salarioComprador * 30)/100;
    valorMes = valorImovel / totalMeses;


    if(valorMes < comprometer){
        printf(" valor maximo mensal que o comprador pode pagar: RS%.2lf\n", comprometer);
        printf(" Valor do financiamento por mes: RS%.2lf\n", valorMes);
    }
    else{
        printf(" valor maximo mensal que o comprador pode pagar: RS%.2lf\n", comprometer);
        printf(" Valor do financiamento por mes: RS%.2lf\n", valorMes);
        printf(" Financiamento NEGADO! valor da mensalidade excedeu o valor maximo que o comprador pode pagar\n");
    }


    return 0;
}
