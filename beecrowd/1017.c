#include <stdio.h>
 
int main() {
 
    int tempo, velocidade, distancia;
    float media;
    scanf("%d %d", &tempo, &velocidade);
    
    distancia = velocidade * tempo;
    media = distancia / 12.0;
    
    printf("%.3f", media);
 
    return 0;
}