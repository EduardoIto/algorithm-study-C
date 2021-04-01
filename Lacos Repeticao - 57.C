#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double salario = 0, totalSalHomens = 0, totalSalMulheres = 0;
    char sexo, decisao;

    do{
        printf(" SALARIO: ");
        scanf("%lf", &salario);
        fseek(stdin,0,SEEK_END);
        printf(" SEXO [F]ou[M]: ");
        scanf("%c", &sexo);

        if(sexo == 'm'){
            totalSalHomens = totalSalHomens + salario;
        }
        else{
            totalSalMulheres = totalSalMulheres + salario;
        }

        fseek(stdin,0,SEEK_END);
        printf(" Deseja continuar? [S]|[N]: ");
        scanf("%c", &decisao);
        printf("\n");



    } while(decisao != 'n');

    printf(" Total pago aos homens = %.2lf reais.\n", totalSalHomens);
    printf(" Total pago as mulheres = %.2lf reais.\n", totalSalMulheres);

    return 0;
}
