/* 
 * 1071 - Soma de Impares Consecutivos II
 * https://www.beecrowd.com.br/judge/pt/problems/view/1071
 * 
 * C17
 */

#include <stdio.h>
 
int main() {
    int X, Y, sum = 0;
    scanf("%d %d", &X, &Y);
    if (Y > X) {
        int aux = Y;
        Y = X;
        X = aux;
    }
    for (int i = X - 1; i > Y; i--) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}