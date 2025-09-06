// Fazer um programa em c que entre entre com o nome, idade , duas notas , calcule a media e retorne se o aluno foic operado (Media >7 ) retorne 1 é se a idade é menor que 18 retorne 1
#include <stdio.h>

int main()
{
    int idade;
    printf("Digite a idade ");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("Você é maior de idade\n");
    }
    else
    {
        printf("Você é menor de idade\n");
    }
    return 0;
}