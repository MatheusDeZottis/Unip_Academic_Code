# include <stdint.h>
int main(){
    int a, b;
    a = 5;
    b = 10;
    printf("a > 0 e b > 5: %d\n", (a > 0) && (b > 5));
    printf("a > 0 ou b < 5: %d\n", (a > 0) || (b < 5));
    return 0;
}