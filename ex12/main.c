 #include <stdio.h>
#include <stdlib.h>

main() {

    float N1, N2, N3, N4, MD1;
    printf ("Informe a primeira nota(0 a 100): ");
    scanf ("%f", &N1);
    printf ("Informe a segunda nota(0 a 100): ");
    scanf ("%f", &N2);
    printf ("Informe a terceira nota(0 a 100): ");
    scanf ("%f", &N3);
    printf ("Informe a quarta nota(0 a 100): ");
    scanf ("%f", &N4);

    MD1 = (N1 + N2 + N3 + N4)/4;

    if (MD1 > 90){
        printf("\nSua media foi: %.2f",MD1);
        printf("\nCONCEITO OTIMO!!");
    }
     else if (MD1 > 75 && MD1 <=90){
        printf("\nSua media foi: %.2f",MD1);
        printf("\nCONCEITO BOM!!");
    }
     else if (MD1 >= 60 && MD1 <=75){
        printf("\nSua media foi: %.2f",MD1);
        printf("\nCONCEITO REGULAR!!");
    }
    else{
        printf("\nSua media foi: %.2f",MD1);
        printf("\nCONCEITO INSUFICIENTE!!");
    }

}
