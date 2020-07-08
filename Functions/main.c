#include <stdio.h>
#include <stdlib.h>

void quadrado();//prototipo

void quadrado(){//sem valor de retnor/parametro de entarada
int k;
for(k=1;k<=10;k++)
    printf("Pos %d,resuldado de k*k=%d\n",k,k*k);
}
int main()
{
   quadrado();//chamada da funcao
    return 0;
}
