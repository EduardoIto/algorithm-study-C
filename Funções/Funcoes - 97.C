#include <stdio.h>

int maior(int numA, int numB, int numC){
    if(numA > numB && numA > numC){
        return numA;
    }
    else if(numB > numA && numB > numC){
        return numB;
    }
    else{
        return numC;
    }

}

int main()
{
    int num1, num2, num3, numMaior;

    printf(" NUMERO 1: ");
    scanf("%d", &num1);
    printf(" NUMERO 2: ");
    scanf("%d", &num2);
    printf(" NUMERO 3: ");
    scanf("%d", &num3);

    numMaior = maior(num1, num2, num3);

    printf("\n Dentre os numeros digitados o maior e o: %d\n", numMaior);

    return 0;
}
