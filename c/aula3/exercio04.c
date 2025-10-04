//mesmo do exerci 03 so que sua impressão ficara na ordem inversa
#include <stdio.h>

int main()
{
    int i, tam;
    printf("Digite qual foi o tamanho do vetor:");
    scanf("%d", &tam);
    int vetor[tam];
    for (i = tam-1; i >= 0; i --)
    {
        printf("Digite o valor da posições %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Os valores digitados foram digitados em ordem inversas:\n");
    for (i = tam-1; i >= 0; i --)
    {
        printf("%d\n O valor das posições %d é %d ",i , vetor[i]);
    }
    return 0;
}