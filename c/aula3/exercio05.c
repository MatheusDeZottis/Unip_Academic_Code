# include <stdio.h>

int main()
{
    int i , num, valor[5];
    printf("Digite um número");
    scanf("%d", &num);
    printf("Preencha o vetor com números inteiros");
    for (i = 0; i < 5;  i++)
    {
        scanf("%d", &valor [i]);
    }
    for(i = 0; i < 5; i ++){
        valor [i] = num * valor [i];
    }
    printf("O novo vetor é:");
     

} 