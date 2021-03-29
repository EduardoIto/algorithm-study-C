#include <stdio.h>

int main()
{
    int soma, inicio, fim, incremento;


    inicio = 6;
    fim = 101;
    incremento = 1;
    soma = 0;

    while(inicio <= fim){
         soma = soma + inicio;
         printf(" %d +", inicio);
         inicio = inicio + incremento;
         inicio++;
    }
    printf("   \n");
    printf("A soma total dos numeros acima = %d\n", soma);

    return 0;
}
