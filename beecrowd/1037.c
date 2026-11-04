#include <stdio.h>
 
int main() {
    float val1;
    scanf("%f", &val1);
    
    if (val1 >= 0 && val1 <= 25){
        printf("Intervalo [0,25]\n");
    } else if (val1 > 25 && val1 <= 50){
        printf("Intervalo (25,50]\n");
    } else if (val1 > 50 && val1 <= 75){
        printf("Intervalo (50,75]\n");
    } else if (val1 > 75 && val1 <= 100){
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
  
    return 0;
}