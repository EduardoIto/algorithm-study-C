#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int reta1, reta2, reta3;

    printf(" Digite o primeiro segmento de reta: ");
    scanf("%d", &reta1);
    printf(" Digite o primeiro segmento de reta: ");
    scanf("%d", &reta2);
    printf(" Digite o primeiro segmento de reta: ");
    scanf("%d", &reta3);

    if(reta1 == reta2 && reta2 ==reta3){
        printf(" TRIANGULO EQUILATERO\n");
    }
    else if(reta1 == reta2 && reta1 != reta3 || reta1 != reta2 && reta1 == reta3 || reta2 == reta1 && reta2 != reta3 || reta2 != reta1 && reta2 == reta3 || reta3 == reta1 && reta3 != reta2 || reta3 != reta2 && reta3 == reta1){
        printf(" TRIANGULO ISOCELES\n");
    }
    else{
        printf(" TRIANGULO ESCALENO\n");
    }

    return 0;
}
