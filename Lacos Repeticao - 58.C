#include <stdio.h>

int main()
{
    int idade = 0, soma = 0, totalAlunos = 0, mediaIdade = 0;

    do{
        printf(" IDADE: ");
        scanf("%d", &idade);

        if(idade != 999){
        soma = soma + idade;
        totalAlunos = totalAlunos + 1;
        }

    } while(idade != 999);

    mediaIdade = soma/totalAlunos;

    printf("\n");
    printf(" Total de alunos na turma: %d\n", totalAlunos);
    printf(" A media de idade do grupo: %d\n", mediaIdade);


    return 0;
}
