#include <stdio.h>

int main()
{
    int nota;
    printf("Digite a a Nota (0 a 10)");
    scanf("%d", &nota);
    if (nota < 0 || nota > 10)
    {
        printf("Nota inválida\n");
    }
    else if (nota >= 7)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }
    return 0;
}