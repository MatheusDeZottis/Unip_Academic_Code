#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");    
    printf ("Número \tNome \t\t\t\tIdade\n");
    printf ("1 \tMatheus \t\t\t20\n");
    printf ("================\t========================\n");
    printf ("% 4d\t% 8d\n", 1, 1 *1);    
    printf ("% 4d\t% 8d\n", 2, 2 *2);    
    printf ("% 4d\t% 8d\n", 3, 3 *3);
    printf ("% 4d\t% 8d\n", 4, 4 *4);
    printf ("% 4d\t% 8d\n", 5, 5 *5);
    return 0;
}