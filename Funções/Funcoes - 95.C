#include <stdio.h>

int somador(int valorA, int valorB){
    return valorA + valorB;

}


int main()
{
    int valor1 = 0, valor2 = 0, soma = 0;

    printf(" Digite um numero: ");
    scanf("%d", &valor1);
    printf(" Digite outro numero: ");
    scanf("%d", &valor2);

    soma = somador(valor1, valor2);

    printf("\n A soma ente %d e %d = %d\n", valor1, valor2, soma);


    return 0;
}
