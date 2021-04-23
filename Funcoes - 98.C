#include <stdio.h>

int superSomador(int numA, int numB){
    int i, somaGeral = 0;
     for(i = numA; numA <= numB; i++){
        printf(" %d +", numA);
        somaGeral = somaGeral + numA;
        numA++;
    }
     return somaGeral;
}

int main()
{
    int num1, num2, soma;

    printf(" PRIMEIRO NUMERO: ");
    scanf("%d", &num1);
    printf(" SEGUNDO NUMERO: ");
    scanf("%d", &num2);

    soma = superSomador(num1, num2);

    printf("\n Soma de todos os numeros = %d\n", soma);

    return 0;
}
