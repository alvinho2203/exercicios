#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,soma=0;

    for (i=2; i<=10; i+=2){
        soma = soma + i;
    }
        printf("\n\nA soma total eh: %d",soma);
}
