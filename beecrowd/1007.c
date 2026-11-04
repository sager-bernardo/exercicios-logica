#include <stdio.h>
 
int main() {
 
    int a, b, c, d, prod, prod2, dif;
    scanf ("%d %d %d %d", &a, &b, &c, &d);
    prod = a * b;
    prod2 = c * d;
    dif = prod - prod2;
    printf("DIFERENCA = %d\n", dif);
 
    return 0;
}