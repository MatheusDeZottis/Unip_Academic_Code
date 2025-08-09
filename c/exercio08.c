#include <stdio.h>

int main() {
    float nuemroFloat;
    double numeroDouble;
    printf("Digite um numero float: ");
    scanf("%f", &nuemroFloat);
    printf("Digite um numero double: ");
    scanf("%lf", &numeroDouble);
    printf("Numero float: %.2f\n", nuemroFloat);
    printf("Numero double: %.2lf\n", numeroDouble);
    return 0;
}