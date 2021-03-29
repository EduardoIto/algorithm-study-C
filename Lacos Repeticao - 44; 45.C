#include <stdio.h>

int main()
{
    int valorInicial, valorFinal, incremento;

    printf(" Digite o valor inicial: ");
    scanf("%d", &valorInicial);
    printf(" Digite o valor final: ");
    scanf("%d", &valorFinal);
    printf(" Digite o incremento: ");
    scanf("%d", &incremento);

    if(valorInicial < valorFinal){

    while(valorInicial <= valorFinal){
        printf(" %d ", valorInicial);
        valorInicial = valorInicial + incremento -1;
        valorInicial++;
        }
    }
    else{
        while(valorInicial >= valorFinal){
        printf(" %d ", valorInicial);
        valorInicial = valorInicial - incremento +1 ;
        valorInicial--;
        }
    }

    printf(" Acabou!\n");

    return 0;
}
