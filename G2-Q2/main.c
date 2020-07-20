#include <stdio.h>
#include <stdlib.h>
void stringrandom(char vet[]);

void stringrandom(char vet[]){
char var[] = {'x','x','x','x','x','x','x','x'};
int r = 0;
    for(int i = 0; i<8;i++){
    do{
        r = rand()%8;

    } while(var[r]!= 'x') ;
        var[r] = vet[i];

  }

  for(int i = 0 ; i < 8 ; i++){
    printf("%c\n",var[i]);
  }

}


int main()
{
   char vet[8] = {'A', 'B', 'C', 'D', 'E','F','G','H'};

  stringrandom(vet);

    return 0;
}
