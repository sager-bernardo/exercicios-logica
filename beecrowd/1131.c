#include <stdio.h>
 
int main() {
    int inter, gremio, qtd = 1, vitInter = 0, vitGremio = 0, empate = 0, novo;
    printf("Digite o placar: ");
    scanf("%d %d", &inter, &gremio);
    printf("Novo grenal (1-sim 2-nao)");
    scanf("%d", &novo);

    if (inter > gremio){
        vitInter++;
    } else if (gremio > inter){
        vitGremio++;
    } else {
        empate++;
    }
    
    while (novo == 1){
        printf("Digite o placar: ");
        scanf("%d %d", &inter, &gremio);
        printf("Novo grenal (1-sim 2-nao)");
        scanf("%d", &novo);
        qtd++;

        if (inter > gremio){
            vitInter++;
        } else if (gremio > inter){
            vitGremio++;
        } else {
            empate++;
        }
    } 

    printf("%d grenais\n", qtd);
    printf("Inter:%d\n", vitInter);
    printf("Gremio:%d\n", vitGremio);
    printf("Empates:%d\n", empate);
    
    if (vitInter > vitGremio){
        printf("Inter venceu mais\n");
    } else if (vitGremio > vitInter){
        printf("Gremio venceu mais\n");
    } else {
        printf("Ninguem venceu mais\n");
    }
 
    return 0;
}