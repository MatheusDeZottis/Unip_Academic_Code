//faça um programa em c quer leia um nome de um livro a quantidade de paginas é a edição improma os dados de entrada

#include <stdio.h>

int main() {
    char nome[30];
    int quantidade_paginas;
    int edicao;
    printf("Digite o nome do livro: ");
    scanf("%s", nome);
    printf("Digite a quantidade de paginas: ");
    scanf("%d", &quantidade_paginas);
    printf("Digite a edição: ");
    scanf("%s", edicao);
    printf("Nome livro é: %s\n", nome);
    printf("Edição é : %d\n", edicao);
    printf("Quantidade de paginas: %d\n", quantidade_paginas);

    return 0;
}