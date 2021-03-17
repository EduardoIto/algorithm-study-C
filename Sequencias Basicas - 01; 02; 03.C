#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char nome[20];
    double salario;

    printf("Nome do funcionario: ");
    //limpar_entrada(); // função para limpar
    fgets(nome, 20, stdin);
    strtok(nome,"\n");      //evita que armazene dentro da variavel a quebra de linha

    printf("Salario: ", salario);
    scanf("%lf", &salario);

    printf("O funcionario %s tem um salario de R$ %.2lf em Junho.\n", nome, salario);

    return 0;
}
