#include <stdio.h>

int main()
{
    int vet[16];
    int i, num = 0;
    char resp;

    printf(" Digite 15 numeros de 1 a 15\n");
    for(i = 1; i < 16; i++){
        printf(" %do: ", i);
        scanf("%d", &vet[i]);
    }

    do{
    printf(" \n Digite um numero de 1 a 15: ");
    scanf("%d", &num);
    for(i = 1; i < 16; i++){
        if(num == vet[i]){
            printf("  Numero %d esta na posicao %d\n", vet[i], i);
        }
    }

    fseek(stdin,0,SEEK_END);
    printf(" Deseja continuar? [s]ou[n]: ");
    scanf("%c", &resp);

    }while( resp == 's');

    return 0;
}
