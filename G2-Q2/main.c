#include <stdio.h>
#include <stdlib.h>
void stringrandom(char s1[]);

void stringrandom(char s1[]){

    for(int i = 0; i<10; i++){
        s1[i] = rand();
        printf("v2: %d\n",s1[i]);
    }

}

int main()
{
    char vet[10];

    for(int i =0; i<10;i++){
        vet[i] = rand();
        printf("v1: %d\n",vet[i]);
    }

    stringrandom(vet);
    //printf("Hello world!\n");
    return 0;
}
