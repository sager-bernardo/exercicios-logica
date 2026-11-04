#include <stdio.h>
 
int main() {
 
    char nome[20];
    double salario, vendas, total, comissao = 0.15;
    scanf(" %s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    total = salario + (vendas * comissao);
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}