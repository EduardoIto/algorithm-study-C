#include <stdio.h>

int main()
{
    int numero = 0, soma = 0;

    do{
        printf(" Digite um numero: ");
        scanf("%d", &numero);
        if(numero != 1111){
            soma = soma + numero;
        }
    } while(numero != 1111);

      printf(" A soma de todos os numero digitados = %d\n", soma);
      printf(" Saindo...\n");

    return 0;
}
