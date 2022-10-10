#include <stdio.h>
#include <string.h>

void gerador(char mensagem, int loop, int tipoBorda){
    if(tipoBorda == 1){
       printf("\n   +-------============--------+\n");
       while(loop <= 3){
       printf("   +       APRENDENDO C        +\n");
       loop++;
    }
    printf("   +-------============--------+\n");

    }
    else if(tipoBorda == 2){
        printf("\n   ~~~~~~~~::::::::::::~~~~~~~~~\n");
        while(loop <= 3){
        printf("   +       APRENDENDO C        +\n");
        loop++;
    }
    printf("   ~~~~~~~~::::::::::::~~~~~~~~~\n");

    }
    else{
        printf("\n   <<<<<<<<------------>>>>>>>>>\n");
        while(loop <= 3){
        printf("   +       APRENDENDO C        +\n");
        loop++;
    }
    printf("   <<<<<<<<------------>>>>>>>>>\n");
    }

}

int main()
{
    int loop = 1, tipoBorda = 0;
    char mensagem;

    printf(" Escolha tipo de borda:\n");
    printf(" [1]+-------============--------+\n");
    printf(" [2]~~~~~~~~::::::::::::~~~~~~~~~\n");
    printf(" [3]<<<<<<<<------------>>>>>>>>>\n");
    printf("\n OPCAO: ");
    scanf("%d", &tipoBorda);

    gerador(mensagem, loop, tipoBorda);


    return 0;
}
