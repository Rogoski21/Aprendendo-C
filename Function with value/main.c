#include <stdio.h>
#include <stdlib.h>

int multiplica (int x){
    x= x * x;
    return x;
}
int main()
{
    int t = 10;//estamos passando 10 e ele vai levar para a funcao e multiplicalo
    printf("%d - %d\n",multiplica(t),t);
        //saida 100 10
    return 0;
}
