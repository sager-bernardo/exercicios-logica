#include <stdio.h>
 
int main() {
 
    int numero, horas;
    double valor;
    scanf("%d %d %lf", &numero, &horas, &valor);
    
    printf("NUMBER = %d\n", numero);
    double salario = horas * valor;
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}