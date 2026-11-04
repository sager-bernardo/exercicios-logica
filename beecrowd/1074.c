#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == 0) {
            printf("NULL\n");
        } else {
            char *paridade = (x % 2 == 0) ? "EVEN" : "ODD";
            char *sinal = (x > 0) ? "POSITIVE" : "NEGATIVE";
            printf("%s %s\n", paridade, sinal);
        }
    }
    return 0;
}