#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int idade = 0, mediaIdade = 0, idadeTotal = 0, totalPessoas = 0, maiorIdade = 0, menorIdade = 100, acimaTrinta = 0, abaixoDezoito = 0;
    char sexo, opcao;
    char nome[15];
    char maisVelho[15], maisNova[15];

    do{
        printf(" NOME: ");
        scanf("%s", &nome);
        printf(" IDADE: ");
        scanf("%d", &idade);
        fseek(stdin,0,SEEK_END);
        printf(" SEXO [M]ou[F]: ");
        scanf("%c", &sexo);

        idadeTotal = idadeTotal + idade;
        totalPessoas = totalPessoas + 1;

        if(idade > maiorIdade){
            maiorIdade = idade;
            strcpy(maisVelho, nome); // colocando o conteudo da variavel char nome na variavel maisVelho.
        }
        else if(sexo == 'f' && idade < menorIdade){
            menorIdade = idade;
            strcpy(maisNova, nome);
        }
        if(sexo == 'm' && idade > 30){
            acimaTrinta = acimaTrinta + 1;
        }
        else if(sexo == 'f' && idade < 18){
            abaixoDezoito = abaixoDezoito + 1;
        }

        fseek(stdin,0,SEEK_END);
        printf(" Deseja continuar? [S]ou[N]: ");
        scanf("%c", &opcao);
        printf("\n");

    } while(opcao != 'n');


    mediaIdade = idadeTotal/totalPessoas;

    printf(" A pessoa mais velha chama: %s.\n", maisVelho);
    printf(" A mulher mais jovem chama: %s.\n", maisNova);
    printf(" A media de idade do grupo: %d.\n", mediaIdade);
    printf(" Total de homens acima de 30 anos: %d.\n", acimaTrinta);
    printf(" Total de mulheres abaixo de 18 anos: %d.\n", abaixoDezoito);


    return 0;
}
