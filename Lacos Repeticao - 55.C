#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loop = 1, numSorteado, aposta;

    printf(" NUMERO SORTEADO: ");
    scanf("%d", &numSorteado);

    system("cls");

    printf("****** ACERTE O NUMERO ******\n");
    while(loop <= 4){
        printf("         Tentativa %d\n", loop);
        printf(" Digite um numero de 1 a 10: ");
        scanf("%d", &aposta);
        if(aposta == numSorteado){
            printf(" Parabens vc acertou!\n");
            loop = 4;
        }
        else if(loop < 4){
            printf(" Nao foi dessa vez tente novamente!\n");
            printf("\n");
        }
        else{
            printf(" Acabaram as apostas! vc perdeu!\n");
        }
        loop++;
    }

    return 0;
}
