#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int horas, pontos;
    double dinheiro;


    printf(" Quantas hora de atividades fisicas fez no mes?: ");
    scanf("%d", &horas);

    if(horas < 10){
        pontos = horas * 2;
    }
    else if(horas >= 10 && horas <= 20){
        pontos = horas * 5;
    }
    else{
        horas > 20;
        pontos = horas *10;
    }


    dinheiro = pontos * 0.05;

    printf(" Total de pontos: %d\n", pontos);
    printf(" Total ganho: %.2lf reais\n", dinheiro);



    return 0;
}
