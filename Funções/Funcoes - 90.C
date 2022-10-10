#include <stdio.h>

int somador(int numA, int numB){
    return numA + numB;
}

int main()
{
    int num1, num2, soma;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    soma = somador(num1, num2);


    printf("A soma entre %d e %d = %d\n", num1, num2, soma);

    return 0;
}
