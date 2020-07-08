#include <stdio.h>
#include <stdlib.h>
//passagem por meio de referencia ou ponteiro
int multiplica (int* x){//estamos passando um ponteiro e usamos (*)
    *x= *x * *x;//por estarmos usando ponteiro usamos as variaveis com (*)

    return x;
}
int main()
{
    int t = 10;
    multiplica(&t);//para passa ruma referencia usamso o (&) que significa ponteiro
    printf("passagem por referencia ou pnteiro=%d\n",t);
    //saida 100

    return 0;
}
