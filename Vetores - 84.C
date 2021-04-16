#include <stdio.h>
#include <string.h>

int main()
{
    int idade[10];
    char nome[10][15];
    int i;

    for(i = 1; i < 10; i++){
        printf(" NOME: ");
        scanf("%s", &nome[i]);
        printf(" IDADE: ");
        scanf("%d", &idade[i]);

        printf("\n");

    }
    printf("\n Pessoas menores de idade:\n");

    for(i = 1; i < 10; i++){
        if(idade[i] < 16){
            printf(" - %s", nome[i]);
            printf(" %d anos.\n", idade[i]);
        }

    }

     printf("\n");


    return 0;
}
