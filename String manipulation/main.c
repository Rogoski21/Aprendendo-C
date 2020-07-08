#include <stdio.h>
#include <stdlib.h>

char string1(){
char tipo[12] = "pedro pedro";
printf("primeiro tipo de string, %s\n",tipo);
return 1;
}

char string2(){
//String por chamada do uujsuario sem espacos
char array[100];

printf("Digite uma string:\n");
scanf("%s",array);

printf("Sua String sem espaco? %s", array);
return 2;
}


char string3(){
//string com chamada do usuario e espaco

char z[100];

printf("Digite uma string:");
gets(z);
printf("Sua String com espaco: %s", z);
}
int main()
{
//string1();//string simples
//string2();//string com chamada do usuariop sem
string3();//string ocm chamada de usuario e espacoed

    return 0;
}
