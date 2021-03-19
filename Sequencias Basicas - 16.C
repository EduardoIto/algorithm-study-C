#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int cigarro, anos, totalDia, minutos, totalCigarro, total;
    double diasPerdidos;

    cigarro = 0;
    anos = 0;
    totalDia = 0;
    minutos = 0;
    totalCigarro = 0;
    total = 0;
    diasPerdidos = 0;

    printf(" Quantidade de cigarro por dia?: ");
    scanf("%d", &cigarro);
    printf(" Quantos anos fumante?: ");
    scanf("%d", &anos);

    totalDia = anos * 365;
    minutos = totalDia * 1440;
    totalCigarro = cigarro * totalDia;
    total = totalCigarro * 10 / 1440; //1440 é minutos equivale a um dia

    printf(" Total de dias fumando: %d\n", totalDia);
    printf(" Total de Minutos: %d\n", minutos);
    printf(" Total de cigarros fumados: %d\n",totalCigarro);

    printf(" Voce perdera aproximadamente %.2d dias de vida!\n", total);

    return 0;
}
