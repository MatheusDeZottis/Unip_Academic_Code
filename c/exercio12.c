#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[50];
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Nome: %s\n", nome);
    return 0;
}