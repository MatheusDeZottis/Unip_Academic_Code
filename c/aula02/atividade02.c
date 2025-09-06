#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x = 5;
    x += 3;
    printf("Resultado de x += 3: %d\n", x);
    x * = 2;
    printf("Resultado de x *= 2: %d\n", x);
    return 0;
}