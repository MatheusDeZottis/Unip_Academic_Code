# include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade = 18;
    printf( "Idade igual a 18: %d\n", idade == 18);
    printf( "Idade maior que 17: %d\n", idade > 17);
    printf ( "Idade diferente de 20: %d\n", idade != 20);
    return 0;
}