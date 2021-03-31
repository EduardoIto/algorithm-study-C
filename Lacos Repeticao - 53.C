#include <stdio.h>
#include <string.h>

int main()
{
    int loop = 1,idade = 0, idadeTotal = 0, totalHomens = 0, totalIdadeHomens = 0, mediaIdade = 0, totalMulheres = 0, mediaHomens = 0, idadeMaiorMulheres = 0;
    char sexo;

    while(loop <= 5){
        printf(" Digite a idade: ");
        scanf("%d", &idade);
        fseek(stdin,0,SEEK_END);
        printf(" Digite sexo [f]feminio|[m]masculino: ");
        scanf("%c", &sexo);
        printf("\n");

        idadeTotal = idadeTotal + idade;

        if(sexo == 'm'){
            totalHomens = totalHomens + 1;
            totalIdadeHomens = totalIdadeHomens + idade;
        }
        else{
            totalMulheres = totalMulheres +1;
            if(idade > 20){
                idadeMaiorMulheres = idadeMaiorMulheres + 1;
            }
        }

        loop++;
    }

    mediaIdade = idadeTotal/5;
    mediaHomens = totalIdadeHomens/totalHomens;

    printf(" Foram cadastrados %d homens.\n", totalHomens);
    printf(" Foram cadastradas %d mulheres.\n", totalMulheres);
    printf(" A media de idade do grupo = %d anos.\n", mediaIdade);
    printf(" A media de idade dos homens = %d anos.\n", mediaHomens);
    printf(" mulheres acima de 20 anos. = %d", idadeMaiorMulheres);

    return 0;
}
