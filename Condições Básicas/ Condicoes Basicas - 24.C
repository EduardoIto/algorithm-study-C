#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double km, total;

    km = 0;
    total = 0;

    printf(" Quantos KM deseja percorrer?: ");
    scanf("%lf", &km);

    if(km <= 200){
        total = km * 0.40;
        printf(" O preco da passagem sera de %.2lf reais\n", total);
    }
    else{
        total = km * 0.45;
        printf(" O preco da passagem sera de %.2lf reais\n", total);
    }


    return 0;
}
