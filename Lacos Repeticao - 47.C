#include <stdio.h>

int main()
{
    int inicio, fim, soma, decremento;

    inicio = 500;
    fim = 0;
    decremento = 49;
    soma = 0;

    while(inicio >= fim){
        soma = soma + inicio;
        printf("%d ", inicio);
        inicio = inicio - decremento;
        inicio--;
    }

    printf("\n");
    printf("A soma dos numeros acima = %d\n", soma);

    return 0;
}
