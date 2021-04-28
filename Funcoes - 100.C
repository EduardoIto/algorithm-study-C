#include <stdio.h>

double media(double notaA, double notaB){
    return (notaA + notaB) / 2;
}

double situacao(double mediaFinalA){
    if(mediaFinalA >= 70){
        return printf(" APROVADO\n");
    }
    else if(mediaFinalA >= 50 && mediaFinalA < 70){
        return printf(" RECUPERACAO\n");
    }
    else{
        return printf(" REPROVADO\n");
    }
}

int main()
{
    double nota1, nota2, mediaFinal;
    //char status[15];

    printf(" NOTA 1: ");
    scanf("%lf", &nota1);
    printf(" NOTA 2: ");
    scanf("%lf", &nota2);

    mediaFinal = media(nota1,nota2);

    printf("\n A media desse aluno = %.1lf\n", mediaFinal);

    situacao(mediaFinal);

    return 0;
}
