#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numeroJogador, numeroSorteado;

    numeroJogador = 0;
    numeroSorteado = 0;

    printf(" Digite um numero entre 1 e 5: ");
    scanf("%d", &numeroJogador);
    printf(" Numero sorteado: ");
    scanf("%d", &numeroSorteado);

    if(numeroJogador == numeroSorteado){
        printf(" PARABENS VOCE GANHOU!\n");
    }
    else{
        printf(" VOCE PERDEU!\n");
    }

    return 0;
}
