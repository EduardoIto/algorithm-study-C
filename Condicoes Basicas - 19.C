#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[15];
    int nota1, nota2, media;

    printf(" Nome do Aluno: ");
    scanf("%s", &nome);
    printf(" Primeira Nota: ");
    scanf("%d", &nota1);
    printf(" Segunda nota: ");
    scanf("%d", &nota2);

    media = (nota1 + nota2)/2;

    printf(" A media do Aluno %s = %.1d\n", nome, media);
    if(media < 70){
        printf(" %s nao obteve um bom aproveitamento!\n", nome);
    }
    else{
        printf(" %s obteve um bom aproveitamento!\n", nome);
    }

    return 0;
}
