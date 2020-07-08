#include <stdio.h>
#include <stdlib.h>

int maior(int vetor[],int tam){
    int m = vetor[0];
    int i;
    for(i=1;i<tam;i++)
        if(vetor[i]>m)m=vetor[i];
    return m;
}
int main()
{
        int numeros[10] = {5 ,43 , 1 , 56 , 78 , 12 , 43 , 45 , 56};
        int valMaior = maior(numeros,10);
    printf("Maior: %d\n",valMaior);
    return 0;
}
