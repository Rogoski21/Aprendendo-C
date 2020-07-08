#include <stdio.h>
#include <stdlib.h>

int main()
{
    //primeiro passo o tipo da variavel

    //---Para printar inteiros
    int idade = 40;
    printf("Idade: %d\n", idade);
    //----------------------------------------------------
    //Para printar um Double
    double media = 8.884;
    printf("Media %f\n",media);
    //----------------------------------------------------
    //Para printar char
    char sexo ='M';
    printf("sexo %c\n",sexo);
    //----------------------------------------------------
    //---para printar uma string devemos fazer um arrazy
    char frase[5] = {'h','o','j','e','\0'};
     printf("Greeting message: %s\n", frase );
    //----------------------------------------------------



    return 0;
}
