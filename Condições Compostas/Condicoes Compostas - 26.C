#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int number1, number2;

    number1 = 0;
    number2 = 0;

    printf(" Digite o primeiro valor: ");
    scanf("%d", &number1);
    printf(" Digite o segundo valor: ");
    scanf("%d", &number2);

    if(number1 > number2){
        printf(" O primeiro valor e o maior!\n", number1);
    }
    else if(number2 > number1){
        printf(" O segundo valor e o maior!\n", number2);
    }
    else{
        printf(" Nao existe valor maior, os dois sao iguais!\n");
    }

    return 0;
}
