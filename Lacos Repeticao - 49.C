#include <stdio.h>

int main()
{
    int loop, par, impar, numero;

    loop = 1;
    par = 0;
    impar = 0;

    while(loop <= 6){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero % 2 == 0){
            par = par + 1;
        }
        else{
            impar = impar + 1;
        }

        loop++;
    }

    printf(" Total de numeros pares digitados = %d\n", par);
    printf(" Total de numeros impares digitados = %d\n", impar);

    return 0;
}
