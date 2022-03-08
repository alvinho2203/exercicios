#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,campeao;
    float tempo,melhorTempo=999;

    for (i=1; i<=10; i++){
        printf("\nQual seu tempo corredor %d: ",i);
        scanf("%f",&tempo);
        if (tempo < melhorTempo){
            melhorTempo = tempo;
            campeao = i;
        }
    }
        printf("\nO campeao eh o corredor numero %d",campeao);
}
