#include <stdio.h>

int main()
{
    int numero, soma, loop;

    loop = 1;
    soma = 0;

    while(loop <= 7){
        printf(" Digite o %do numero: ", loop);
        scanf("%d", &numero);
        soma = soma + numero;
        loop++;
    }
    printf("\n");
    printf(" A soma de todos os numeros digitados = %d\n", soma);
    return 0;
}
