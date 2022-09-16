#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    double salarioAtual, aumento, novoSalario;
    char genero;
    int anos;


    printf(" Salario atual: ");
    scanf("%lf", &salarioAtual);
    fseek(stdin,0,SEEK_END);
    printf(" Digite Sexo [M]Masculino | [F]Feminino: ");
    scanf("%c", &genero);
    printf(" Quanto anos de empresa: ");
    scanf("%d", &anos);

    if(genero == 'F'){
        if(anos < 15){
            novoSalario = (salarioAtual * 5) / 100;
            aumento = salarioAtual + novoSalario;
        }
        else if(anos >= 15 && anos <= 20){
            novoSalario = (salarioAtual * 12) / 100;
            aumento = salarioAtual + novoSalario;
        }
        else{
            novoSalario = (salarioAtual * 23) / 100;
            aumento = salarioAtual + novoSalario;
        }
        printf(" Seu novo salario sera de %.2lf reais.\n", aumento);
    }

    if(genero == 'M'){
        if(anos < 20){
            novoSalario = (salarioAtual * 3) / 100;
            aumento = salarioAtual + novoSalario;
        }
        else if(anos >= 20 && anos <= 30){
            novoSalario = (salarioAtual * 13) / 100;
            aumento = salarioAtual + novoSalario;
        }
        else{
            novoSalario = (salarioAtual * 25) / 100;
            aumento = salarioAtual + novoSalario;
        }
        printf(" Seu novo salario sera de %.2lf reais.\n", aumento);
    }

    return 0;
}
