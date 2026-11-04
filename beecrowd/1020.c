#include <stdio.h>
 
int main() {
 
    int valor, anos, meses, dias;
    scanf("%d", &valor);
    
    anos = valor / 365;
    valor = valor % 365;
    
    meses = valor / 30;
    dias = valor % 30;
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
 
    return 0;
}