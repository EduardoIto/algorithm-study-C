#include <stdio.h>

int main()
{
    int loop = 1;
    double preco, menorPreco = 1000, maiorPreco = 0;

    while(loop <=8){
        printf(" Produto %d: ", loop);
        scanf("%lf", &preco);

        if(preco > maiorPreco){
            maiorPreco = preco;
        }
        if(preco < menorPreco){
            menorPreco = preco;
        }

        loop++;

    }

    printf(" Maior preco digitado = %.2lf\n", maiorPreco);
    printf(" Menor preco digitado = %.2lf\n", menorPreco);



    return 0;
}
