#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int seg1, seg2, seg3;

    seg1 = 0;
    seg2 = 0;
    seg3 = 0;

    printf("Digite o tamanho do primeiro segmento: ");
    scanf("%d", &seg1);
    printf("Digite o tamanho do segundo segmento: ");
    scanf("%d", &seg2);
    printf("Digite o tamanho do terceiro segmento: ");
    scanf("%d", &seg3);

    if(seg1 <= (seg2+seg3) && seg2 <= (seg1+seg3) && seg3 <= (seg1+seg2)){
        printf("SIM! Os 3 tamanhos digitados formam um triangulo\n");
    }
    else{
        printf("NAO! Os 3 tamanhos digitados nao formam um triangulo\n");
    }

    return 0;
}
