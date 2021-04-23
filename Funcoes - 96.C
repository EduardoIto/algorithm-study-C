#include <stdio.h>

double media(double notaA, double notaB){
    return (notaA + notaB) / 2;
}

int main()
{
    double nota1, nota2, mediaFinal;

    printf(" NOTA 1: ");
    scanf("%lf", &nota1);
    printf(" NOTA 2: ");
    scanf("%lf", &nota2);

    mediaFinal = media(nota1,nota2);

    printf("\n A media desse aluno = %.1lf\n", mediaFinal);

    return 0;
}
