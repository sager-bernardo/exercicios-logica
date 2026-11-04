#include <stdio.h>
 
int main() {
 
    int val1 = 1, val2 = 60;
    
    printf("I=%d J=%d\n", val1, val2);
    while (val2 > 0){
        val1 += 3, val2 -= 5;
        printf("I=%d J=%d\n", val1, val2);
    }
    return 0;
}