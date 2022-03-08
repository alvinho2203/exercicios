#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;

    printf("Entre com um numero: \n");
    scanf("%d", &n1);
    printf("Entre com um segundo numero: \n");
    scanf("%d", &n2);
    printf("Entre com um terceiro numero: \n");
    scanf("%d", &n3);

    if (n1>n2 && n1>n3){
        printf("O maior numero eh: %d!!\n",n1);
    }
    else if (n1>n2 && n1<n3){
        printf("O maior numero eh: %d!!\n",n3);
    }
     else if (n1<n2 && n1>n3){
        printf("O maior numero eh: %d!!\n",n2);
    }
     else if (n1<n2 && n2<n3){
        printf("O maior numero eh: %d!!\n",n3);
    }
    else{
        printf("Sao iguais!!\n");
    }
    return 0;
}
