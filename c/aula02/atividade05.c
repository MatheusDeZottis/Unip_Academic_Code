// Fazer um programa em c que entre entre com o nome, idade , duas notas , calcule a media e retorne se o aluno foic operado (Media >7 ) retorne 1 é se a idade é menor que 18 retorne 1
#include <stdio.h>

int main()
{
    char nome[50];
    int idade;
    float nota1, nota2, media;
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("Media: %.2f\n", media);
    printf("Aluno aprovado (media > 7): %d\n", media > 7);
    printf("Aluno menor de idade (idade < 18): %d\n", idade < 18);
    return 0;
}