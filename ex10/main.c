#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c,
          delta,
          sqrtdelta,
        raiz1,raiz2;

        printf("Entre com o valor de a: ");
        scanf("%f", &a);

        printf("Entre com o valor de b: ");
        scanf("%f", &b);

        printf("Entre com o valor de c: ");
        scanf("%f", &c);


        if(a != 0)
        {

            delta = (b*b) - (4*a*c);
            sqrtdelta = sqrt(delta);

            if(delta >= 0)
            {
                raiz1 = (-b + sqrtdelta)/(2*a);
                raiz2 = (-b - sqrtdelta)/(2*a);
                printf("Raizes: %.2f e %.2f", raiz1, raiz2);
            }
            else
            {
                printf("Delta menor que 0. Raizes imaginarias");

            }

        }
        else
            printf("Coeficiente 'a' inválido. Não é uma equação do 2o grau");
}
