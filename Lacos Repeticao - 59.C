#include <stdio.h>

int main()
{
    int idade = 0, totIdadeHomens = 0, totHomens = 0, maiorIdade = 0, mediaIdade = 0, menorIdade = 100;
    char sexo, decisao;

    do{
        printf(" IDADE: ");
        scanf("%d", &idade);
        fseek(stdin,0,SEEK_END);
        printf(" SEXO [F]ou[M]: ");
        scanf("%c", &sexo);

        if(idade > maiorIdade){
            maiorIdade = idade;
        }

        if(sexo == 'm'){
            totIdadeHomens = totIdadeHomens + idade;
            totHomens = totHomens + 1;
        }
        else if(idade < menorIdade){
            menorIdade = idade;
        }

        fseek(stdin,0,SEEK_END);
        printf(" Deseja continuar? [S]|[N]: ");
        scanf("%c", &decisao);
        printf("\n");

    } while(decisao != 'n');

        mediaIdade = totIdadeHomens / totHomens;

        printf(" A maior idade = %d anos.\n", maiorIdade);
        printf(" Total de homens cadastrados = %d.\n", totHomens);
        printf(" Idade da mulher mais jovem = %d anos.\n", menorIdade);
        printf(" Media de idade entre os homens = %d anos\n", mediaIdade);



    return 0;
}
