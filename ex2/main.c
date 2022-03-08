#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;

    printf("Entre com um numero: \n");
    scanf("%f", &n1);

    if (n1>0){
        printf("O numero eh positivo!!\n");
    }
    else if (n1<0){
        printf("O numero eh negativo!!\n");
    }
    else{
        printf("O numero eh nulo!!\n");
    }
    return 0;
}
