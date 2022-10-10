#include <stdio.h>

int maior(int numA, int numB){
    if(numA > numB){
        return numA;
    }
    else{
        return numB;
    }
}

int main()
{
    int num1, num2, compara;

    printf(" Digite um numero: ");
    scanf("%d", &num1);
    printf(" Digite outro numero: ");
    scanf("%d", &num2);

    compara = maior(num1, num2);

    if(num1 == num2){
        printf("\n Numeros iguais.\n");
    }
    else{
        printf("\n Dos dois numeros digitados: %d e o maior.\n", compara);
    }
    return 0;
}
