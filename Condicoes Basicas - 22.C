#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int dataNasc, idade, anos;

    dataNasc = 0;
    idade = 0;
    anos = 0;

    printf(" Digite ano de nascimento: ");
    scanf("%d", &dataNasc);

    idade = 2021 - dataNasc;

    if(idade < 18){
        anos = 18 - idade;
        printf(" Falta %d anos para o alistamento militar\n!", anos);
    }
    else{
        anos = idade - 18;
        printf(" Ja se passaram %d anos do alistamento militar!\n", anos);
    }
    return 0;
}
