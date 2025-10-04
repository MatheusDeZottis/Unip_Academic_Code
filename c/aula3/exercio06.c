#include <stdio.h>

int main()
{
    int vetor [5], i , soma = 0;
    float media;
    for(i = 0 ; i < 5; i ++){
        printf("Digite o %d valor ", i + 1);
        scanf("%d", &vetor [i]);
    }
    for(i = 0; i < 5; i ++ ){
        soma = soma + vetor [i];
    }
    media = soma/5;
    printf("\n media:%2f \n", media);
    return 0;
}