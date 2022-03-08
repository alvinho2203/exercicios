#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;

    printf("Entre com um numero: \n");
    scanf("%d", &n1);

    if((n1%5==0) && (n1%7==0)){
        printf("O numero eh divisivel por 5 e 7 ao mesmo tempo!!\n");
    }
    else{
        printf("O numero nao eh divisivel por 5 e 7 ao mesmo tempo!!\n");
    }
    return 0;
}
