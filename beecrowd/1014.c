#include <stdio.h>
 
int main() {
 
    int dist;
    scanf("%d", &dist);
    float valor;
    scanf("%f", &valor);
    
    double media = dist / valor;
    printf("%.3lf km/l\n", media);
 
    return 0;
}