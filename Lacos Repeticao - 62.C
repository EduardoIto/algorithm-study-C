#include <stdio.h>

int main()
{
    int loop = 0, idade = 0, contador = 0, media = 0, somaIdade = 0, quantIdades = 0, maiorVinte = 0, mediaIdades = 0;
    char decisao;

    for(idade = 0; decisao != 'n'; loop++){
        printf(" IDADE: ");
        scanf("%d", &idade);

        somaIdade = somaIdade + idade;
        quantIdades = quantIdades + 1;

        if(idade >= 21){
            maiorVinte = maiorVinte + 1;
        }

        fseek(stdin,0,SEEK_END);
        printf(" Deseja continuar? [S]ou[N]: ");
        scanf("%c", &decisao);

        printf("\n");
    }

    mediaIdades = somaIdade / quantIdades;

    printf(" Total de idades digitadas = %d.\n", quantIdades);
    printf(" Media da idades digitadas = %d anos.\n", mediaIdades);
    printf(" Total de pessoa com 21 anos ou mais = %d.\n", maiorVinte);


    return 0;
}
