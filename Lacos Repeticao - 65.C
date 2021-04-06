#include <stdio.h>

int main()
{
    int loop;

    for(loop = 100; loop >= 0; loop-= 10){
        printf("%d ", loop);
    }
    printf("\n");

    return 0;
}
