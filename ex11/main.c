 #include <stdio.h>
#include <stdlib.h>

main() {

    float N1, N2, N3, N4, MD1;
    printf ("Informe a primeira nota: ");
    scanf ("%f", &N1);
    printf ("Informe a segunda nota: ");
    scanf ("%f", &N2);
    printf ("Informe a terceira nota: ");
    scanf ("%f", &N3);
    printf ("Informe a quarta nota: ");
    scanf ("%f", &N4);

    MD1 = (N1 + N2 + N3 + N4)/4;

    if (MD1 >= 60){
        printf("APROVADO!!");
        printf("\nSua media foi: %.2f",MD1);
    }
    else{
        printf("REPROVADO!!");
        printf("\nSua media foi: %.2f",MD1);
    }

}
