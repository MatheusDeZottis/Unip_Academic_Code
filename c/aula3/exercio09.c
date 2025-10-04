#include <stdio.h>

int main(){
    int m [3][4] = {{3, 5, 7, 9}, {2, 4, 6, 8}, {1, 0, -1, -3}};
    int i, j, soma = 0;
    for(i = 0; i < 3; i ++){
        for(j = 0; j < 4; j ++){
            soma += m[i][j];
        }
        printf("%d",m);
    }
    printf("\n");
    return 0;
}