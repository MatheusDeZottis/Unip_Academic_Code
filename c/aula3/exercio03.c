#include <stdio.h>

int main()
{
    int i, tam;
    printf("Digite qual foi o tamanho do vetor:");
    scanf("%d", &tam);
    int vetor[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Digite o valor da posições %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Os valores digitados foram:\n");
    for (i = 0; i < tam; i++)
    {
        printf("%d\n O valor das posições %d é %d ",i , vetor[i]);
    }
    return 0;
}