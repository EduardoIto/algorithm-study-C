#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double nota1, nota2, media;


    printf(" Primeira nota: ");
    scanf("%lf", &nota1);
    printf(" Segunda nota: ");
    scanf("%lf", &nota2);

    media = (nota1 + nota2)/2;
    printf(" Media = %.1lf\n",media);

    if(media >= 7.0){
        printf(" APROVADO\n");
    }
    else if(media >= 5.0 && media <= 6.9){
        printf(" RECUPERACAO\n");
      }
      else{
        printf(" REPROVADO\n");
      }

    return 0;
}
