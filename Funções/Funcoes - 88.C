#include <stdio.h>
#include <string.h>

void gerador(char mensagem, int loop){

    printf("+-------============--------+\n");
    while(loop <= 4){
       printf("+       APRENDENDO C        +\n");
       loop++;
    }
    printf("+-------============--------+\n");

}


int main()
{
    int loop = 1;
    char mensagem;

    gerador(mensagem, loop);

    return 0;
}
