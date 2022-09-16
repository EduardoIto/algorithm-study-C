#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[20];
    double salario, anos, aumento, novoSalario;

    printf(" Nome do funcionario: ");
    scanf("%s", &nome);
    printf(" Salario: ");
    scanf("%lf", &salario);
    printf(" Anos de empresa: ");
    scanf("%lf", &anos);

    if(anos > 10){
        aumento = (salario * 20)/100;
        novoSalario = salario + aumento;
        printf(" O novo salario de %s e de %.2lf reais.\n", nome, novoSalario);
    }
    else if(anos >= 3 && anos <= 10){
        aumento = (salario * 12.5)/100;
        novoSalario = salario + aumento;
        printf(" O novo salario de %s e de %.2lf reais.\n", nome, novoSalario);
    }
    else{
        aumento = (salario * 3)/100;
        novoSalario = salario + aumento;
        printf(" O novo salario de %s e de %.2lf reais.\n", nome, novoSalario);
    }

    return 0;
}
