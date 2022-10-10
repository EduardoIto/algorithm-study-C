#include <stdio.h>

int contador(int inicio, int fim, int increm){
    for(inicio = inicio; inicio < fim; inicio+= increm - 1){
        printf(" %d >> ", inicio);

        inicio++;
    }

    printf("FIM\n");
}


int main()
{
    int inicio, fim, increm;

    printf(" Digite o inicio: ");
    scanf("%d", &inicio);
    printf(" Digite o fim: ");
    scanf("%d", &fim);
    printf(" Digite o incremento: ");
    scanf("%d", &increm);

    contador(inicio, fim, increm);



    return 0;
}
