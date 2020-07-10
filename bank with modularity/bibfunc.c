#include "bibfunc.h"
int notas(int valor){
int n100 = valor / 100;
int n50 = valor % 100 / 50;
int n20 = valor % 100 % 50 / 20;
int n10 = valor % 100 % 50 % 20 / 10;
int n5 =  valor % 100 % 50 % 20 %10 / 5;
int n1 =  valor %100%50%20%10%5;;

printf("notas de 100: %d\n notas de 50: %d\n notas de 20: %d\n notas de 10: %d\n notas de 5: %d\n notas de 1: %d\n",n100,n50,n20,n10,n5,n1);

}
