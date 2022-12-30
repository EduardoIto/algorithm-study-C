#include <stdio.h>

int main()
{
    int vet[11];
    int i, soma = 0, media = 0, acimaMedia = 0, maiorNota = 0, posicao = 0;

    for(i = 1; i < 11; i++){
       printf(" NOTA %d: ", i);
       scanf("%d", &vet[i]);
       soma = soma + vet[i];
       if(vet[i] > 60){
          acimaMedia = acimaMedia + 1;
       }
       if(vet[i] > maiorNota){
          maiorNota = vet[i];
          posicao = i;
       }
    }
    media = soma / 10;

    printf(" \n Media da turma = %d\n", media);
    printf(" Alunos acima da media = %d\n", acimaMedia);
    printf(" Maior nota: %d\n", maiorNota);
    printf(" Posicao: %d\n", posicao);

    return 0;
}
