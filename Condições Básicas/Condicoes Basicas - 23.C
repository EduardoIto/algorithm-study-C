#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ler_texto(char *buffer, int length){
   fgets(buffer, length, stdin);
   strtok(buffer, "\n");
}

int main()
{
    char nome[15];
    char sexo;
    double valorCompra, desconto, total;

    valorCompra = 0;
    desconto = 0;

    printf(" Digite seu nome: ");
    ler_texto(nome, 15);
    printf(" Sexo [F]ou[M]: ");
    scanf("%c", &sexo);
    printf(" Valor da compra: ");
    scanf("%lf", &valorCompra);

    if(sexo == 'F'){
        desconto = (valorCompra * 13)/100;
        total = valorCompra - desconto;
        printf(" %s parabens pelo seu dia! Sua compra deu desconto de %.2lf reais. Total a pagar e %.2lf reais\n", nome, desconto, total);
    }
    else{
        desconto = (valorCompra * 5)/100;
        total = valorCompra - desconto;
        printf(" %s sua compra deu desconto de %.2lf reais. Total a pagar e %.2lf reais\n", nome, desconto, total);
    }

    printf(" Obrigado! volte sempre!\n ");

    return 0;
}
