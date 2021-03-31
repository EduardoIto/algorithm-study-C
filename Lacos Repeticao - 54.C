#include <stdio.h>

int main()
{
    int loop = 1, maisNov = 0, pessoasLeves = 0, pessoasPesadas = 0;
    double peso, altura, somaAltura, mediaAltura;

    while(loop <= 7){
        printf(" PESO: ");
        scanf("%lf", &peso);
        printf(" ALTURA: ");
        scanf("%lf", &altura);
        printf("\n");

        somaAltura = somaAltura + altura;

        if(peso > 90){
            maisNov = maisNov + 1;
        }

        if(peso < 50 && altura < 1.60){
            pessoasLeves = pessoasLeves + 1;
        }
        else if(peso > 100 && altura > 1.90){
            pessoasPesadas = pessoasPesadas + 1;
        }

        loop++;
    }

        mediaAltura = somaAltura / 7;

        printf(" A media de altura do grupo: %.2lfm.\n", mediaAltura);
        printf(" Total de pessoas acima de 90Kg: %d\n", maisNov);
        printf(" Total de pessoas que pesam abaixo de 50Kg e tem menos de 1.60m: %d\n", pessoasLeves);
        printf(" Total de pessoas que pesam acima de 100Kg e tem mais de 1.90m: %d\n", pessoasPesadas);



    return 0;
}
