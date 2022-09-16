#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ano;

    printf(" Digite um ano qualquer (4 Digitos): ");
    scanf("%d", &ano);

    if(ano % 4 == 0 || ano % 100 == 0 && ano % 400 == 0){
        printf(" Ano BISSEXTO\n");
    }
    else{
        printf(" Nao e Ano BISSEXTO\n");
        }

    return 0;
}
