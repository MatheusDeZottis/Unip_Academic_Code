#include <stdio.h>

int main()
{
    int m [3][3];
    int i, j, soma = 0;
    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
        printf("\n");
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                soma += m[i][j];
            }
        }
        printf("A soma dos valores da matriz é: %d\n", soma);

}
