#include <stdio.h>
#include <stdlib.h>

void swap(int* var1, int* var2){
//estamos trocando as variaveis e seus valores uma com outra
int tempo = *var1;
*var1 = *var2;
*var2 = tempo;
}
int main()
{
    int x=10, y=5;
    swap(&x,&y);
    printf("Valor de X:%d, Valor de Y: %d\n",x,y);
    return 0;
}
