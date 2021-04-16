#include <stdio.h>

int main()
{
    int vet[9];
    int i, soma = 0, media = 0, maiorIdade = 0, posicao = 0;

    for(i = 1; i < 9; i++){
        printf(" IDADE %d: ", i);
        scanf("%d", &vet[i]);
        soma = vet[i] + soma;
    }
    media = soma/9;
    printf(" \n Media de idade das pessoas cadastradas = %d anos.\n", media);
    printf(" Pessoas com mais de 25 anos, idade:");
    for(i = 1; i < 9; i++){
        if(vet[i] > 25){
            printf(" %d;", i);
        }
        if(vet[i] > maiorIdade){
            maiorIdade = vet[i];
            posicao = i;
        }
    }

    printf(" \n Maior idade cadastrada = %d anos na posicao %d\n", maiorIdade, posicao);


    return 0;
}
