#include <stdio.h>

int parOuImpar(int numX){
    if(numX % 2 == 0){
        return printf(" %d e numero PAR.\n", numX);
    }
    else{
        return printf(" %d e numero IMPAR.\n", numX);
    }
}


int main()
{
    int num;

    printf(" Digite um numero: ");
    scanf("%d", &num);

    parOuImpar(num);


    return 0;
}
