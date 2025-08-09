#include <stdio.h>

int main() {
    char nome[20]; //suporta 19 caracteres
    printf("Digite seu nome");
    scanf("%19s", nome); //evita estouro de buffer
    printf ("Seu nome é: %s\n", nome);
    return 0;
}

// O scanf ("es",nome) ; mas lẽ espaços. 
//Para ler espaços com scanf é indicado scanf("&[\n]", nome)