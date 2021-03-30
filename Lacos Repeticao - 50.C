#include <stdio.h>

int main()
{
    int numero, maior, div, loop;
     maior = 0;
     div = 0;
     loop = 0;

    while(loop <= 11){
        printf(" Digite um numero de 0 a 10: ");
        scanf("%d", &numero);
        if(numero > 5){
           maior = maior + 1;
        }
        if(numero % 3 == 0){
           div = div + 1;
        }
    loop++;
    }

    printf(" Quantidade de numeros maior que 5 = %d\n", maior);
    printf(" Quantidade de numeros divisiveis por 3 = %d\n", div);


    return 0;
}
