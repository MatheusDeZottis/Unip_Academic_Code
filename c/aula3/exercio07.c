/*  atividades entra com 10 valores prencher é pois verificar pares ṕe impar depis disso somar todd*/
# include <stdio.h>
int main()
{
    int i , num, valor[10], somaPar = 0, somaImpar = 0;
    printf("Preencha o vetor com números inteiros\n");
    for (i = 0; i < 10;  i++)
    {
        scanf("%d", &valor [i]);
    }
    for(i = 0; i < 10; i ++){
        if(valor[i] % 2 == 0){
            somaPar += valor[i];
        } else {
            somaImpar += valor[i];
        }
    }
    printf("A soma dos números pares é: %d\n", somaPar);
    printf("A soma dos números ímpares é: %d\n", somaImpar);
    for(i = 0; i < 5; i ++){
        printf("%d ", valor[i]);
    }
    return 0; 
}