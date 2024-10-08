#include <stdio.h>

int main(void) {
    float mediaVoto;
    int Voti;
    int i = 0;
    int votoTot = 0 ;
    while(Voti != 0) {
        printf("Voti: ");
        scanf("%d", &Voti);
        votoTot += Voti;
        i++;
    } mediaVoto = votoTot / i;
    printf("la media è : %f",mediaVoto);
    return 0;
}
