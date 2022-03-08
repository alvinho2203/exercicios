#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,soma=0;

    for (i=1; i<=10; i++){
        soma = soma + i;
        printf("A soma eh: %d\n\n",soma);
    }
        printf("\n\nA soma total eh: %d",soma);
}
