// este simplifiquando o exercio 01 
#include <stdio.h>

int main ()
{
    int i, idade [5];
    printf("Entre com as idades:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &idade[i]);
    }
    printf("As idades digitadas foram:");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", idade[i]);
    }
    return 0;
}