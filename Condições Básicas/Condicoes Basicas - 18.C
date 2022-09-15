#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ANO, IDADE;

    printf(" Ano de nascimento: ");
    scanf("%d", &ANO);

    IDADE = 2021 - ANO;
    printf(" Sua idade e %d anos.\n", IDADE);

    if(IDADE >= 16){
        printf(" VOCE PODE VOTAR!\n");
    }
    else{
        printf(" VOCE NAO PODE VOTAR!\n");
    }

    return 0;
}
