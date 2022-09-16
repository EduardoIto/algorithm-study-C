#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int opcao1, opcao2;

    opcao1 = 0;
    opcao2 = 0;

    printf(" JOGADOR 01 - [0]PEDRA [5]PAPEL [2]TESOURA: ");
    scanf("%d", &opcao1);
    printf(" JOGADOR 02 - [0]PEDRA [5]PAPEL [2]TESOURA: ");
    scanf("%d", &opcao2);

    if(opcao1 == 0 && opcao2 == 0){
        printf(" EMPATOU\n");
    }
    else if(opcao1 == 0 && opcao2 == 5){
        printf(" JOGADOR 02 GANHOU\n");
    }
    else if(opcao1 == 0 && opcao2 == 2){
        printf(" JOGADOR 01 GANHOU\n");
    }
    else if(opcao1 == 5 && opcao2 == 5){
        printf(" EMPATOU\n");
    }
    else if(opcao1 == 5 && opcao2 == 0){
        printf(" JOGADOR 01 GANHOU\n");
    }
    else if(opcao1 == 5 && opcao2 == 2){
        printf(" JOGADOR 02 GANHOU\n");
    }
     else if(opcao1 == 2 && opcao2 == 2){
        printf(" EMPATOU\n");
    }
    else if(opcao1 == 2 && opcao2 == 0){
        printf(" JOGADOR 02 GANHOU\n");
    }
    else if(opcao1 == 2 && opcao2 == 5){
        printf(" JOGADOR 01 GANHOU\n");
    }



    return 0;
}
