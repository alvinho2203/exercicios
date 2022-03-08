#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,soma;

    printf("Entre com um numero: \n");
    scanf("%f", &n1);
    printf("Entre com um segundo numero: \n");
    scanf("%f", &n2);
    printf("Entre com um terceiro numero: \n");
    scanf("%f", &n3);

    if (n1>n2 && n2>n3){
        soma = n1 + n2;
        printf("A soma eh: %.2f!!\n",soma);
    }
    else if (n1>n2 && n2<n3){
        soma = n1 + n3;
        printf("A soma eh: %.2f!!\n",soma);
    }
     else if (n1<n2 && n1<n3){
        soma = n2 + n3;
        printf("A soma eh: %.2f!!\n",soma);
    }
    else{
        printf("Sao iguais!!\n");
    }
    return 0;
}
