#include <stdio.h>
 
int main() {
 
    double a, b, c, pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    double tri = (a * c)/ 2;
    double cir = pi * (c * c);
    double tra = ((a + b) * c) / 2;
    double qua = b * b;
    double ret = a * b;
    
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", qua);
    printf("RETANGULO: %.3lf\n", ret);
 
    return 0;
}