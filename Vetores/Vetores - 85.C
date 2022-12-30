#include <stdio.h>

int main()
{
    char nome[6][15], sexo[6];
    double salario[6];
    int i;

    for(i = 1; i < 6; i++){
        printf(" NOME: ");
        scanf("%s", &nome[i]);
        fseek(stdin,0,SEEK_END);
        printf(" SEXO [M]ou[F]: ");
        scanf("%c", &sexo[i]);
        printf(" SALARIO: ");
        scanf("%lf", &salario[i]);
        printf("\n");
    }

    printf(" Mulheres com salario superior a 5 mil: \n");
    for(i = 1; i < 6; i++){
        if(sexo[i] == 'f' && salario[i] > 5000){
            printf(" %s:", nome[i]);
            printf(" R$%.2lf\n", salario[i]);
        }

    }

    printf("\n");

    return 0;
}
