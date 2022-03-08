#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float x;


    printf("Entre com um numero diferente de 0: \n");
    scanf("%d",&a);

    while (a==0){
         printf("Digite novamente um numero diferente de 0: \n");
         scanf("%d", &a);
    }
    printf("Entre com outro numero: \n");
    scanf("%d",&b);

    x = -b/a;

    printf("A raiz eh: %.2f",x);

    return 0;
}
