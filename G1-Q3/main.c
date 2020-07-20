#include <stdio.h>
#include <stdlib.h>

int contaBits(int n){

   int cont = 0;


   while(n != 0) {
      if(n & 1  == 1) {
         cont++;
      }
      n = n >> 1; //empurra um bit para reduzir o tamanho

     // printf("%d\n",n);
   }
    return cont;
}

void bin(unsigned n)
{

    if (n > 1)
        bin(n/2);

    //printf("%d", n % 2);
}

int main() {
  int i = 12345;
  bin(i);
  int cont = contaBits(i);
  printf("Total de bits ligados: %d\n", cont);
  return 0;
}
