#include <stdio.h>
#include <stdlib.h>
void printa(float *mat);
float somat(float *mat,int tam);
void media(float *mat ,int linha, int col);

float somat(float *mat ,int tam){
    int i;
    int soma=0;
    for(i = 1; i<tam;i+=2){
        soma = mat[i] + soma;
        printf("soma: %d\n",soma);
    }
    return soma;
}

void media(float *mat ,int linha, int col){

    for(in#include <stdio.h>
#include <stdlib.h>
void printa(float *mat);
float somat(float *mat,int tam);
void media(float *mat ,int linha, int col);

float somat(float *mat ,int tam){
    int i;
    int soma=0;
    for(i = 1; i<tam;i+=2){
        soma = mat[i] + soma;
        printf("soma: %d\n",soma);
    }
    return soma;
}

void media(float *mat ,int linha, int col){

    for(int i = 0; i < linha; i++){
            float soma = 0;
            for(int j = i*col;j<i*col+col;j++){
                    soma+=mat[j];
            //printf("I: %d  J: %d\n",i,j);

            }
            float media = soma / col;

            printf("Media: %.0f\n",media);

    }

}

/*(
void printa(float *mat){
    int i;
    int tam =25000000;
    for(i = 0; i<tam;i++){
        mat[i] = rand()%100;
        //printf(" %.0f\n",mat[i]);
    }
}
*/

int main()
{
//    float vet[25000000];
//    for(int i =0; i < 25000000; i++){
//        vet[i]= rand()%100;
//    }

    float *mat = malloc(5000 * 5000 * sizeof *mat);
    for(int i =0; i < 25000000; i++){
        mat[i]= rand()%100;
  }


    //float soma = somat(mat,25000000);
    media(mat,5000,5000);
   // printf("Soma: %.0f",soma);

    return 0;
}
t i = 0; i < linha; i++){
            float soma = 0;
            for(int j = i*col;j<i*col+col;j++){
                    soma+=mat[j];
            //printf("I: %d  J: %d\n",i,j);

            }
            float media = soma / col;

            printf("Media: %.0f\n",media);

    }

}

/*(
void printa(float *mat){
    int i;
    int tam =25000000;
    for(i = 0; i<tam;i++){
        mat[i] = rand()%100;
        //printf(" %.0f\n",mat[i]);
    }
}
*/

int main()
{
//    float vet[25000000];
//    for(int i =0; i < 25000000; i++){
//        vet[i]= rand()%100;
//    }

    float *mat = malloc(5000 * 5000 * sizeof *mat);
    for(int i =0; i < 25000000; i++){
        mat[i]= rand()%100;
  }


    //float soma = somat(mat,25000000);
    media(mat,5000,5000);
   // printf("Soma: %.0f",soma);

    return 0;
}
