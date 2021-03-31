#include <stdio.h>

int main()
{
    int loop, idade, somaIdade, maiorIdade, menorIdade, mediaIdade, maiorIdadeLida;
    loop = 1;
    idade = 0;
    somaIdade = 0;
    maiorIdade = 0;
    menorIdade = 0;
    mediaIdade = 0;
    maiorIdadeLida = 0;

    while(loop <= 10){
        printf(" Digite a idade da pessoa %d: ", loop);
        scanf("%d", &idade);

        somaIdade = idade + somaIdade;
        mediaIdade = somaIdade/10;

        if(idade > maiorIdadeLida){
            maiorIdadeLida = idade;
        }

        if(idade > 18){
            maiorIdade = maiorIdade + 1;
        }

        if(idade < 5){
            menorIdade = menorIdade + 1;
        }

        loop++;
    }

    printf("\n");
    printf(" A media de idade do grupo = %d anos.\n", mediaIdade);
    printf(" Maiores de 18 anos = %d pessoas.\n", maiorIdade);
    printf(" menores de 5 anos = %d pessoas.\n", menorIdade);
    printf(" Maior idade lida foi %d anos.\n", maiorIdadeLida);

    return 0;
}
