#include <stdio.h>
#include <math.h>

int potencia(int baseA, int expoenteA){
    return pow(baseA, expoenteA);
}

int main()
{
    int base = 0, expoente = 0, resultado = 0;

    printf(" Digite o valor da BASE: ");
    scanf("%d", &base);
    printf(" Digite o valor do EXPOENTE: ");
    scanf("%d", &expoente);

    resultado = potencia(base,expoente);

    printf(" %d", resultado);

    return 0;
}
