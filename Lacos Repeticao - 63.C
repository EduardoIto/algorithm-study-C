#include <stdio.h>

int main()
{
    int loop = 0, numero = 0, soma = 0, quantidade = 0, menorNumero = 1000, media = 0, numeroPar = 0;
    char decisao;

    for(numero = 0; decisao != 'n'; loop++){
        printf(" Digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;
        quantidade = quantidade + 1;

        if(numero < menorNumero){
            menorNumero = numero;
        }
        else if(numero % 2 == 0){
            numeroPar = numeroPar + 1;
        }

        fseek(stdin,0,SEEK_END);
        printf(" Deseja continuar? [S]ou[N]: ");
        scanf("%c", &decisao);
        printf("\n");
    }

    media = soma / quantidade;

    printf(" A soma de todos numeros digitados = %d\n", soma);
    printf(" O menor valor digitado = %d\n", menorNumero);
    printf(" A media entre todos os valores = %d\n", media);
    printf(" Total de valores pares digitados = %d", numeroPar);
    printf("\n");

    return 0;
}
