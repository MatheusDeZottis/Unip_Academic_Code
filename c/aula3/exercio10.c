#include <stdio.h>

int main()
{
    int m [3][3];
    int i , j, somatotal = 0, somap = 0;
    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d Elemento", &m[i][j]);
        }
    }
        printf("\n");
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                somatotal += m[i][j];
            }
            for(j = 0; j < 3; j++){
                printf("%d ", m[i][j]);
            }
            printf("\n");
            if(m [i][j]%2 == 0){
                somap = somap + m[i][j];
            }
        }
        printf("A soma dos valores da matriz é: %d\n", somatotal);
        printf("A soma dos valores pares da matriz é: %d\n", somap);
    return 0;
    
}