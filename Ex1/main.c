#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    printf("Entre com um numero: \n");
    scanf("%d", &n1);
    printf("Entre com outro numero: \n");
    scanf("%d", &n2);

    if (n1>n2){
        printf("O maior numero eh o primeiro!!\n");
    }
    else if (n1<n2){
        printf("O maior numero eh o segundo!!\n");
    }
    else{
        printf("Sao iguais!!\n");
    }
    return 0;
}
