#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 200;
    printf("valor do b: %d\n",b);

    int* a = &b;
    printf("posicao de memoria da var b:%p\n",a);
    printf("pegando com *a teremos o valor de b: %d\n",*a);
    return 0;
}
