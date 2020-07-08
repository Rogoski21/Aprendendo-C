#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dados[] = {1,2,3,4,5,6,7,8,9,10};
   printf("*Tam int : %lu\n",sizeof(int));
   printf("*Inicio de dados: %p\n",dados);

   printf("Inicio de dados: %p\n",&dados[0]);
   printf("segundo element: %p\n",&dados[1]);
    return 0;
}
